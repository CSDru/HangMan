//
// Created by Dru on 9/5/2024.
//

#include "Word.h"
std::ostream& operator<<(std::ostream& out, const Word& word)
{
    for( Letter l : word._word)
    {
        out << l;
    }

    return out;
}

std::string Word::toString() const {
    std::string word;
    for (auto i : _word)
    {

        word.push_back(i.getLetter());
    }
    return word;
}

Word::Word(const std::string& word)
{
    setWord(word);
}

void Word::setWord(const std::string& word)
{
    _word.clear();
    for(char i : word)
    {
        _word.emplace_back(i);
    }
}
const std::vector<Letter>& Word::getWord() const
{
    return _word;
}

bool operator==(const Word& word1, const Word& word2){
    return word1.toString() == word2.toString();
}

bool operator!=(const Word& word1, const Word& word2){
    return word1.toString() != word2.toString();
}

unsigned int Word::size() const{
    return _word.size();
}