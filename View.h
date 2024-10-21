//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_VIEW_H
#define HANGMAN_VIEW_H

#include "Body.h"
#include "Word.h"

class View
{
private:
    Body* body;
    Word* word;

public:
    View(Body& body, Word& word);  // Constructor
    void display() const;  // Display the current game state
};

#endif //HANGMAN_VIEW_H
