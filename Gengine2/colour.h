/* 
 * File:   Colour.h
 * Author: EricDesktop
 *
 * Created on June 9, 2013, 10:05 PM
 */

#ifndef COLOUR_H
#define	COLOUR_H

#include <SDL/SDL.h>

class Colour{
    
public:
    
    Colour(int r = 0, int g = 0, int b = 0, int a = 255);
    int getR(void);
    int getG(void);
    int getB(void);
    int getA(void);
    Uint32 map(void);
    
    int r, g, b, a;
};

#endif	/* COLOUR_H */
