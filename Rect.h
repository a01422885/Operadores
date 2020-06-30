//
//  Rect.h
//  Sobrecarga
//
//  Created by Rosa Guadalupe Paredes Juarez on 6/2/20.
//  Copyright © 2020 iRoseApps. All rights reserved.
//

#ifndef Rect_h
#define Rect_h

class Rect {
    private:
        int x;
        int y;
    
    public:
        Rect();
        Rect(int, int);
        Rect operator+(const Rect&);
        Rect operator-(const Rect&);
        int getX();
        int getY();
};

#endif /* Rect_h */
