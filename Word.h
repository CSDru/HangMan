//
// Created by Dru on 9/5/2024.
//

#ifndef HANGMAN_WORD_H
#define HANGMAN_WORD_H

#include "Letter.h"
#include <vector>
#include <string>
#include <iostream>

class Word
{
private:
    std::vector<Letter> _word;

public:
    // Constructors
    Word() = default;
    Word(const std::string& word);

    // Methods
    void setWord(const std::string& word);
    const std::vector<Letter>& getWord() const;
    bool guessLetter(char letter);
    bool isFullyGuessed() const;
    std::string toString() const;

    // Overloaded operators
    friend std::ostream& operator<<(std::ostream& out, const Word& word);
};

#endif //HANGMAN_WORD_H
