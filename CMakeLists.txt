cmake_minimum_required(VERSION 3.25)
project(Dsmanuscript)

set(CMAKE_CXX_STANDARD 17)

add_executable(Dsmanuscript  SqlList/_SqlList.cpp LinkList/_LinkList.cpp LinkList/_LinkList.h main.cpp SqlList/_SqlList.h LinkList/_LinkList.cpp LinkList/_DoubleLinkList.cpp LinkList/_DoubleLinkList.h Stack/_SqStack.cpp Stack/_SqStack.h)
