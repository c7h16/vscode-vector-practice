cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)

project(vectorList01)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

#output binaries to the "build/bin" folder 
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#sets the executable to its own directory one level down but the build command
#is run from the build folder 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../app )

add_executable(${PROJECT_NAME} ${SOURCES})
