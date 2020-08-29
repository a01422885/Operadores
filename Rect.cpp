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
    //tienes como parametro un apuntador a un objeto como genérico guardado en memoria
    
    //Haces un objeto rectangulo temporal  temp
    Rect temp;
    //inidcas que la x de este objeto se sumara con la x de
    temp.x = this->x + val.x;
    temp.y = this->y + val.y;
    return temp;
}

Rect Rect::operator-(const Rect& val) {
//Haces un objeto rectangulo temporal 
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
