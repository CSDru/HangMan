//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_CHECKER_H
#define HANGMAN_CHECKER_H

#include "Word.h"

class Checker
{
private:
    Word *wordPtr;

public:
    Checker();
    Checker(Word& word);

    bool hasLetter(const Letter& letter) const;
};

#endif //HANGMAN_CHECKER_H
