cmake_minimum_required(VERSION 3.0)
project(PSP0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

##########################################
######## Set Variables             #######
##########################################

set(INCLUDE ${CMAKE_SOURCE_DIR}/inc)
set(SOURCE ${CMAKE_SOURCE_DIR}/src)
set(TEST ${CMAKE_SOURCE_DIR}/test)


##########################################
####### Library's Header Included #######
##########################################
include_directories(${INCLUDE})

##########################################
######## Build libraries           #######
##########################################

set(node_SRC ${INCLUDE}/Node.hpp)
add_library(node SHARED ${SOURCE}/Node.cpp)

set(linkedList_SRC ${INCLUDE}/LinkedList.hpp})
add_library(linkedList SHARED ${SOURCE}/LinkedList.cpp)


##########################################
############   Build test  ###############
##########################################
# Add and run CMakeLists.txt inside 'test' folder
add_subdirectory(test)


set(SOURCE_FILES ${SOURCE}/main.cpp)
add_executable(PSP0 ${SOURCE_FILES})