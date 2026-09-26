cmake_minimum_required(VERSION 3.10)

project(Guessing Game
        VERSION 1.0 
        DESCRIPTION "A simple C++ Guessing Game"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(GuessingGame guessingGame.cpp)
