//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_CHECKER_H
#define HANGMAN_CHECKER_H
#include "Phrase.h"
class Checker
{
private:
    Phrase *phrasePtr;

public:
    Checker();
    Checker(Phrase& phrase);

    bool hasLetter(const Letter& letter) const;
};

#endif //HANGMAN_CHECKER_H
