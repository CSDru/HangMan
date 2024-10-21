//
// Created by Dru on 9/5/2024.
//

#ifndef HANGMAN_LETTER_H
#define HANGMAN_LETTER_H

#include <ostream>  // Include this header to allow usage of std::ostream

class Letter
{
private:
    char _letter;
    bool _revealed = false;

public:
    Letter();
    Letter(char letter);

    char getLetter() const;
    void setLetter(char letter);
    bool isRevealed() const;
    void reveal();

    friend std::ostream& operator<<(std::ostream& out, const Letter& letter);
};

#endif //HANGMAN_LETTER_H
