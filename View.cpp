//
// Created by Dru on 9/10/2024.
//

#include "View.h"
#include <iostream>

View::View(Body& body, Word& word) : body(&body), word(&word) {}

void View::display() const
{
    std::cout << "Current word: " << *word << std::endl;
    std::cout << "Hangman figure:\n" << *body << std::endl;
}
