//
// Created by Dru on 9/5/2024.
//

#include "Phrase.h"

Phrase::Phrase() : Phrase(""){}

Phrase::Phrase(const std::string &phrase)
{
    setPhrase(phrase);
}

void Phrase::setPhrase(const std::string &phrase)
{
    _phrase.clear();
    std::string currentWord;
    for (char c : phrase)
    {
        if (c == ' ')
        {
            _phrase.emplace_back(currentWord);
            currentWord.clear();
        }
        else
        {
            currentWord.push_back(c);
        }
    }
    if (!currentWord.empty())
    {
        _phrase.emplace_back(currentWord);
    }
}

std::string Phrase::toString() const
{
    std::string result;
    for (size_t i = 0; i < _phrase.size(); ++i)
    {
        result += _phrase[i].toString();
        if (i < _phrase.size() - 1)
        {
            result += " ";
        }
    }
    return result;
}

const std::vector<Word>& Phrase::getPhrase() const
{
    return _phrase;
}
