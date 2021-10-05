cmake_minimum_required(VERSION 3.14)

add_subdirectory(idn)

project(qt6jid LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6Core)
find_package(Qt6Widgets)
find_package(Qt6Core5Compat)

add_executable(qt6jid
  main.cpp jid.cpp jid.h
)

target_link_libraries(qt6jid idn Qt6::Core Qt::Core5Compat)
