//
// Created by Dru on 9/5/2024.
//

#include "Word.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, const Word& word)
{
    for( const Letter& l : word.getWord())
    {
        out << l;
    }
    return out;
}

std::string Word::toString() const
{
    std::string wordStr;
    for (const auto &l : _word)
    {
        wordStr.push_back(l.getLetter());
    }
    return wordStr;
}

Word::Word(const std::string& word)
{
    setWord(word);
}

void Word::setWord(const std::string& word)
{
    _word.clear();
    for(char c : word)
    {
        _word.emplace_back(c);
    }
}

const std::vector<Letter>& Word::getWord() const
{
    return _word;
}

bool Word::guessLetter(char letter)
{
    bool found = false;
    for (Letter &l : _word)
    {
        if (l.getLetter() == letter)
        {
            l.reveal();
            found = true;
        }
    }
    return found;
}

bool Word::isFullyGuessed() const
{
    for (const Letter &l : _word)
    {
        if (!l.isRevealed())
        {
            return false;
        }
    }
    return true;
}
