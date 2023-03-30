cmake_minimum_required(VERSION 3.5)

project(figures LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(figures main.cpp
                       figure.h
                       figure.cpp
                       circle.h
                       circle.cpp
                       display.h
                       display.cpp
                       quad.h
                       quad.cpp
                       triangle.h
                       triangle.cpp
                       colors.h
                       rectangle.cpp
                       rectangle.h
                       polygon.cpp
                       polygon.h
                       viewer.cpp
                       viewer.h)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(figures ${OPENGL_LIBRARIES} ${GLUT_glut_LIBRARY} )
