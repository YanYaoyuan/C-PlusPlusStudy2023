# 设置CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(MyProject VERSION 1.0)

# 设置C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# 指定源文件和头文件
set(SOURCES 1_1.cpp)


# 添加可执行文件
add_executable(MyProject ${SOURCES} ${HEADERS})
