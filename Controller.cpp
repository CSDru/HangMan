//
// Created by Dru on 9/10/2024.
//

#include "Controller.h"
#include <iostream>

Controller::Controller(View &view, Checker &checker) : view(&view), checker(&checker) {}

char Controller::getGuess()
{
    char guess;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    return guess;
}


void Controller::processGuess(char guess, Word &word, Body &body)
{

    if (!checker->hasLetter(Letter(guess)))
    {
        body.drawNextPart();
    }
    else
    {
        word.guessLetter(guess);
    }

    view->display();
}
