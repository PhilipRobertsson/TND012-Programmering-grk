cmake_minimum_required(VERSION 3.13.0...3.20.5)
project(TND012-Lab-6 VERSION 1.0.0 DESCRIPTION "TND012 Lab 6" LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

function(enable_warnings target)
target_compile_options(${target} PUBLIC 
$<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive->
$<$<CXX_COMPILER_ID:AppleClang,Clang,GNU>:-Wall -Wextra -Wconversion>
)
endfunction()

add_executable(uppgift1 uppgift1.cpp movie.cpp movie.h movies.txt uppgift1-output.txt)
add_executable(uppgift2 uppgift2.cpp image.cpp image.h uppgift2-input-example.txt uppgift2-output-example.txt uppgift2-input-short.txt uppgift2-output-short.txt uppgift2-input-large.txt uppgift2-output-large.txt)

enable_warnings(uppgift1)
enable_warnings(uppgift2)

