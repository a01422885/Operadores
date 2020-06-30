//
//  Rect.cpp
//  Sobrecarga
//
//  Created by Rosa Guadalupe Paredes Juarez on 6/2/20.
//  Copyright © 2020 iRoseApps. All rights reserved.
//

#include <stdio.h>
#include "Rect.h"

Rect::Rect() {
    x = 0;
    y = 0;
}

Rect::Rect(int valX, int valY) {
    x = valX;
    y = valY;
}

Rect Rect::operator+(const Rect& val) {
    Rect temp;
    temp.x = this->x + val.x;
    temp.y = this->y + val.y;
    return temp;
}

Rect Rect::operator-(const Rect& val) {
    Rect temp;
    temp.x = this->x - val.x;
    temp.y = this->y - val.y;
    return temp;
}

int Rect::getX() {
    return x;
}

int Rect::getY() {
    return y;
}
