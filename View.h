//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_VIEW_H
#define HANGMAN_VIEW_H

#include "Body.h"
#include "Phrase.h"
#include <iostream>
class View
{
private:
    Body body;
    Phrase phrase;
    Word incorrectLetters;
    Phrase prompt;

public:
    View();
    friend std::ostream& operator<<(std::ostream& out, const View& view);
    /***
     * Create getters and setters for private member variables
     */

};


#endif //HANGMAN_VIEW_H
