cmake_minimum_required(VERSION 4.0)
project(active C ASM_NASM)

set(CMAKE_C_STANDARD 23 CACHE STRING "C standard")
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_C_COMPILER clang)
set(CMAKE_C_FLAGS "-nostdlib")

enable_language(ASM_NASM)
set(CMAKE_ASM_NASM_CREATE_SHARED_LIBRARY TRUE)

set(CMAKE_LINKER_TYPE MOLD)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(ACTIVE
    source/active.c
    source/active-syscall.asm
    source/active-types.c
)

# active
add_library(lib-active SHARED ${ACTIVE})

set_target_properties(lib-active PROPERTIES
    OUTPUT_NAME "active"
    VERSION 1.0.0
    SOVERSION 1
    C_VISIBILITY_PRESET default
    POSITION_INDEPENDENT_CODE ON
)

target_include_directories(lib-active
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# active-main
add_library(lib-active-main STATIC source/active-main.asm)

set_target_properties(lib-active-main PROPERTIES
    OUTPUT_NAME "active-main"
    VERSION 1.0.0
    SOVERSION 1
    C_VISIBILITY_PRESET default
    POSITION_INDEPENDENT_CODE ON
)

# cat
add_executable(exe-cat examples/cat/app.c)

set_target_properties(exe-cat PROPERTIES
    OUTPUT_NAME "cat"
)

target_link_libraries(exe-cat PRIVATE lib-active-main lib-active)

# tcp-echo
add_executable(exe-tcp-echo examples/tcp-echo/app.c)

set_target_properties(exe-tcp-echo PROPERTIES
    OUTPUT_NAME "tcp-echo"
)

target_link_libraries(exe-tcp-echo PRIVATE lib-active-main lib-active)

# install
install(TARGETS lib-active lib-active-main exe-cat exe-tcp-echo
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION include)
