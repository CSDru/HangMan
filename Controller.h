//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_CONTROLLER_H
#define HANGMAN_CONTROLLER_H

#include "View.h"
#include "Checker.h"
#include "Body.h"
#include "Word.h"

class Controller
{
private:
    View* view;
    Checker* checker;

public:
    Controller(View& view, Checker& checker);

    char getGuess();  // Get user guess from input
    void processGuess(char guess, Word& word, Body& body);  // Process the user's guess and update the game
};

#endif //HANGMAN_CONTROLLER_H
