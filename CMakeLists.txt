cmake_minimum_required(VERSION 3.21)
project(HangMan)

set(CMAKE_CXX_STANDARD 17)

add_executable(HangMan main.cpp Hangman.cpp Hangman.h Letter.cpp Letter.h Phrase.cpp Phrase.h Word.cpp Word.h Test.cpp Test.h Controller.cpp Controller.h Body.cpp Body.h View.cpp View.h Checker.cpp Checker.h)
