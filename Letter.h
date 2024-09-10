//
// Created by Dru on 9/5/2024.
//

#ifndef HANGMAN_LETTER_H
#define HANGMAN_LETTER_H

#include <iostream>
class Letter

{
private:
    char _letter;

public:
    Letter();
    explicit Letter(char letter);
    char getLetter() const;
    void setLetter(char letter);
    friend std::ostream& operator<<(std::ostream& out, const Letter& letter);
};

#endif //HANGMAN_LETTER_H
