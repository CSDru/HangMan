//
// Created by Dru on 9/5/2024.
//

#ifndef HANGMAN_TEST_H
#define HANGMAN_TEST_H

#include "Letter.h"
#include <iostream>

namespace Test {
    template <typename T>
    void test(const T& object, const std::string& testName, bool lambda(const T& object));

    inline void runTests();
}


#include "Test.cpp"

#endif //HANGMAN_TEST_H
