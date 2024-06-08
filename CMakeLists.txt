cmake_minimum_required(VERSION 3.28)
project(CompanySystemByOOP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CompanySystemByOOP main.cpp
        Company.cpp
        Company.h
        Employee.cpp
        Employee.h
        officeBoy.cpp
        officeBoy.h)
