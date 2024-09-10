//
// Created by Dru on 9/10/2024.
//

#include "Checker.h"
Checker::Checker()
{

}

Checker::Checker(Phrase &phrase)
        : phrasePtr(&phrase)
{

}

bool Checker::hasLetter(const Letter &letter) const
{
    for (const auto &word: *phrasePtr)
        for(const auto &l : word.getWord())
            if(l.getLetter() == letter.getLetter())
                return true;

    return false;
}
