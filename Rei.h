//
//  Rei.h
//  xadres2.0
//
//  Created by Fernando Brambilla de Mello on 24/05/14.
//  Copyright (c) 2014 Fernando Brambilla de Mello. All rights reserved.
//

#ifndef xadres2_0_Rei_h
#define xadres2_0_Rei_h

#include "Peca.h"
#include <math.h>
#include <cstdlib>
class Rei : public Peca
{
public:
    Rei(int x, int y, int c):Peca(x,y,c)
    {
        
    }
    virtual int possoPularPeca(){
        return 0;
    }
    virtual string getSimbolo(){
        
        if(cor == 1){
            return "♚";
        }
        return "♔";
        
    }
    
    virtual int validaMov (int x1, int y1, int corr){
        if ((cor==1 &&corr==2)||(cor==0 &&corr==1)||corr==0)
        {
        if (abs(x0-x1)<=1 && abs(y0-y1)<=1) {
            x0=x1;
            y0=y1;
            return 1;
        }
        }
        return 0;
    }
};



#endif
