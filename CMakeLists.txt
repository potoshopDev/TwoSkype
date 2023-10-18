cmake_minimum_required(VERSION 3.27)
project(TwoSkype VERSION 0.1.0 LANGUAGES CXX)

set(CXX_STANDARD 23)

add_executable(TwoSkype src/resource.rc src/main.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)

include_directories("D:/Repos/tmp/alarmclock2/src/")

