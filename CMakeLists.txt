cmake_minimum_required(VERSION 3.19)
project(MLcore)

set(CMAKE_CXX_STANDARD 14)


#set(Boost_INCLUDE_DIR  "$ENV{BOOST_ROOT}")
#set(Boost_LIBRARY_DIR "$ENV{BOOST_ROOT}/libs")

find_package(Boost 1.76.0 REQUIRED COMPONENTS)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(MLcore main.cpp include/MLcore/dataframe.h)
target_link_libraries(MLcore ${Boost_LIBRARIES})