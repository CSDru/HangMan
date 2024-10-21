//
// Created by Dru on 9/5/2024.
//

#include "Letter.h"
#include <iostream>

Letter::Letter() : Letter('_'){}

Letter::Letter(char letter)
{
    setLetter(letter);
}

char Letter::getLetter() const
{
    return _letter;
}

void Letter::setLetter(char letter)
{
    _letter = letter;
}

bool Letter::isRevealed() const
{
    return _revealed;
}

void Letter::reveal()
{
    _revealed = true;
}

// Overload << operator for Letter class
std::ostream& operator<<(std::ostream& out, const Letter& letter)
{
    if (letter.isRevealed())
    {
        out << letter.getLetter();
    }
    else
    {
        out << '_';
    }
    return out;
}
