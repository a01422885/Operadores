//
//  main.cpp
//  Sobrecarga
//
//  Created by Rosa Guadalupe Paredes Juarez on 6/2/20.
//  Copyright © 2020 iRoseApps. All rights reserved.
//

#include <iostream>
#include "Rect.h"
using namespace std;


int main(int argc, const char * argv[]) {
    // Crear dos objectos Rect
    Rect r1(1, 2);
    Rect r2(2, 6);
    Rect r3;
    Rect r4;
    
    r3 = r1 + r2;
    r4 = r1 - r2;
    
    cout << r3.getX() << " " << r3.getY() << endl;
    cout << r4.getX() << " " << r4.getY() << endl;
    
    return 0;
}
