//
// Created by Dru on 9/3/2024.
//

#include "Hangman.h"
#include "Controller.h"
#include "Body.h"
#include "Word.h"
#include "Checker.h"
#include "View.h"

#include <iostream>

void Hangman::start()
{
    // Placeholder word for the game (can be set dynamically or loaded)
    Word wordToGuess("hangman");

    // Initialize the Body, Checker, and View
    Body body;
    Checker checker(wordToGuess);
    View view(body, wordToGuess);

    // Initialize the Controller
    Controller controller(view, checker);

    // Set number of allowed attempts (6 parts to draw)
    int attempts = 6;

    // Main game loop
    while (attempts > 0 && !wordToGuess.isFullyGuessed() && !body.isComplete())
    {
        // Display the current state
        view.display();

        // Get user guess
        char guessedLetter = controller.getGuess();

        // Process the guess (update body and word based on correctness)
        controller.processGuess(guessedLetter, wordToGuess, body);

        // Reduce attempts if the body part was drawn (incorrect guess)
        if (!checker.hasLetter(Letter(guessedLetter)))
        {
            attempts--;
        }
    }

    // End game messages
    if (wordToGuess.isFullyGuessed())
    {
        std::cout << "Congratulations! You've guessed the word: " << wordToGuess.toString() << std::endl;
    }
    else
    {
        std::cout << "Game Over! The correct word was: " << wordToGuess.toString() << std::endl;
    }
}
