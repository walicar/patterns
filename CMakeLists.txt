cmake_minimum_required(VERSION 3.10)

project(Patterns VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_OSX_ARCHITECTURES, "arm64")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(src)

add_executable(app 
	src/main.cc
	src/strategy/duck.cc
	src/strategy/mallard_duck.cc
	src/strategy/rubber_duck.cc
)
