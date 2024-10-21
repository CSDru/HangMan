//
// Created by Dru on 9/10/2024.
//

#include "Body.h"
#include <iostream>

void Body::drawNextPart()
{
    if (partsDrawn < 6) {
        partsDrawn++;
    }
}

bool Body::isComplete() const
{
    return partsDrawn == 6;
}

std::ostream& operator<<(std::ostream& out, const Body& body)
{
    switch (body.partsDrawn) {
        case 0: out << "No parts drawn yet.\n"; break;
        case 1: out << " O \n"; break;           // Head
        case 2: out << " O \n | \n"; break;      // Head + Body
        case 3: out << " O \n/| \n"; break;      // Head + Body + Left Arm
        case 4: out << " O \n/|\\\n"; break;     // Head + Body + Both Arms
        case 5: out << " O \n/|\\\n/ \n"; break; // Head + Body + Left Leg
        case 6: out << " O \n/|\\\n/ \\\n"; break; // Full Body (Game Over)
        default: break;
    }
    return out;
}
