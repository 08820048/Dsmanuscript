cmake_minimum_required(VERSION 3.25)
project(Dsmanuscript)

set(CMAKE_CXX_STANDARD 17)

add_executable(Dsmanuscript  SqlList/_SqlList.cpp LinkList/_LinkList.cpp LinkList/_LinkList.h main.cpp SqlList/_SqlList.h)
