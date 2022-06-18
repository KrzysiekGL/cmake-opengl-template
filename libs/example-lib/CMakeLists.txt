cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRCS src/*.cpp)
add_library(exlib ${SRCS})

target_include_directories(exlib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Setup GLFW
find_library(GLFW glfw3 PATHS ${CMAKE_CURRENT_SOURCE_DIR}/libs/GLFW/lib)
set(GLFW_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/GLFW/include)
target_include_directories(exlib PUBLIC ${GLFW_INCLUDE_DIR})
target_link_libraries(exlib INTERFACE ${GLFW})

# Setup dependencies
target_link_libraries(exlib INTERFACE pthread)
target_link_libraries(exlib INTERFACE dl)


