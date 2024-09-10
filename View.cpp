//
// Created by Dru on 9/10/2024.
//

#include "View.h"
View::View()
{

}


std::ostream &operator<<(std::ostream &out, const View &view)
{
    out << view.phrase << view.body << view.incorrectLetters;

    return out;
}