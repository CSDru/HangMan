//
// Created by Dru on 9/10/2024.
//

#ifndef HANGMAN_BODY_H
#define HANGMAN_BODY_H

#include <iostream>
class Body
{

public:
    friend std::ostream& operator<<(std::ostream& out, const Body& phrase);
    /**
     * implement functionality to gradually draw the body
     */
};

#endif //HANGMAN_BODY_H
