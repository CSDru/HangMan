//
// Created by Dru on 9/10/2024.
//

#include "Checker.h"

Checker::Checker()
{
}

Checker::Checker(Word &word) : wordPtr(&word)
{
}

bool Checker::hasLetter(const Letter &letter) const
{
    for (const auto &l : wordPtr->getWord())
        if (l.getLetter() == letter.getLetter())
            return true;

    return false;
}
