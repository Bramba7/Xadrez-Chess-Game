//
//  Peao.h
//  xadres2.0
//
//  Created by Fernando Brambilla de Melx0 on 24/05/14.
//  Copyright (c) 2014 Fernando Brambilla de Mello. All rights reserved.
//

#ifndef xadres2_0_Peao_h
#define xadres2_0_Peao_h
#include "Peca.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;
int fist[8][2];

class Peao: public Peca
{

public:
    
    
    Peao(int x, int y, int c):Peca(x,y,c)
    {
        
    }
    
    virtual string getSimbolo()
    {
        if(cor == 1){
        return "♟";
        }
        return "♙";
        
        
    }
    virtual int possoPularPeca()
    {
        return 0;
    }
    virtual int validaMov (int x1, int y1, int corr){
        if (cor != jogador) {
            return 0;    // Peca errada
        }
        if( abs(x0-x1)==abs(y0-y1)==1 && ((cor==1 &&corr==2)||(cor==0 &&corr==1))){
            x0=x1;    // Come
            y0=y1;
            return 1;
        }
        
        if(x1 != x0 ||(cor == 0 && y1 <= y0 )||(cor == 1 && y1 >= y0 ))
		{
			return 0; //"Jogada invalida"
        }
		if((y0 == 1 && y1 >=4 && cor == 0 )|| (corr==1 && cor == 0 ))
        {
            return 0; //"Jogada invalida"
        }
        
        if((y0 == 6 && y1 <=3 && cor == 1)|| (corr==2 && cor == 1 ))
        {
        return 0; //"Jogada invalida"
        }
       
        x0=x1;
        y0=y1;
        return 1;
        
    }
};

#endif
