//
// Created by Dru on 9/5/2024.
//

#include "Phrase.h"
#include <sstream>

void Phrase::setPhrase(const std::string& phrase)
{
    _phrase.clear();
}
std::vector<Word> Phrase::split(const std::string& word)
{
    std::stringstream s(word);
    std::vector<Word> words;
    std::string next;

    while(s >> next)
        words.emplace_back(next);

    return words;
}

Phrase::Phrase() : Phrase("")
{

}

Phrase::Phrase(const std::string &phrase)
{
    setPhrase(phrase);
}

std::string Phrase::toString() const
{
    std::string ret;
    for(int i=0; i<_phrase.at(i).size(); ++i)
    {
        ret += _phrase.at(i).toString();
        if(i<_phrase.at(i).size() - 1)
            ret += " ";
    }
    return ret;
}

const std::vector<Word> &Phrase::getPhrase() const
{
    return _phrase;
}
