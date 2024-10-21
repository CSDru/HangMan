//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_BODY_H
#define HANGMAN_BODY_H

#include <iostream>

class Body
{
private:
    int partsDrawn = 0;

public:
    friend std::ostream& operator<<(std::ostream& out, const Body& body);
    void drawNextPart();
    bool isComplete() const;
};

#endif //HANGMAN_BODY_H
