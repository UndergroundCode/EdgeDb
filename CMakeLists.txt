cmake_minimum_required(VERSION 2.8)

project(EdgeDb C)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(BUILD_DIR ${CMAKE_SOURCE_DIR}/build)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "build/")

macro(set_c_flag FLAG)
    if(${ARGC} GREATER 1)
        set(CMAKE_C_FLAGS_${ARGV1} "${CMAKE_C_FLAGS_${ARGV1}} ${FLAG}")
    else()
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${FLAG}")
    endif()
endmacro()

set_c_flag("-Wall")
set_c_flag("-g")

set(SOURCE_LIST
	${SOURCE_DIR}/main.c
	${SOURCE_DIR}/node/node.c
	${SOURCE_DIR}/prop/prop.c
	${SOURCE_DIR}/graph/graph.c
	${SOURCE_DIR}/mem/allocate.c
	${SOURCE_DIR}/shell/shell.c
)

add_executable(EdgeDb ${SOURCE_LIST})
