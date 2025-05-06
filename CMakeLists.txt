cmake_minimum_required(VERSION 3.31)
project(qt_test_actions_ubuntu)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Test)

add_library(qt_test_actions_ubuntu lib.cpp
        Widget.cpp
        Widget.h)
target_link_libraries(qt_test_actions_ubuntu PUBLIC Qt::Core Qt::Widgets)
target_include_directories(qt_test_actions_ubuntu PUBLIC
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/..>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

include(CTest)
qt_add_executable(widget_test widget_test.cpp)
add_test(NAME widget_test COMMAND widget_test)
target_link_libraries(widget_test PRIVATE Qt::Test qt_test_actions_ubuntu)
