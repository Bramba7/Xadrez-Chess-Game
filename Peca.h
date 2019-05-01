//
//  Peca.h
//  xadres2.0
//
//  Created by Fernando Brambilla de Mello on 24/05/14.
//  Copyright (c) 2014 Fernando Brambilla de Mello. All rights reserved.
//
#ifndef xadres2_0_Peca_h
#define xadres2_0_Peca_h
#define BRANCA 0
#define PRETA 1
#include <iostream>
#include <string>
using namespace std;
int jogador = 0; // 0- Branca  1- Preta

class Peca{
public:
    int x0,y0;
    int cor;
public:
    Peca(int x, int y, int c){
        x0 = x;
        y0 = y;
        cor= c;
    }
    void setX0(int x){
        x0 = x;
    }
    void setY0(int y){
        y0 = y;
    }
    void setCor(int c){
        cor = c;
    }
    int getX0(){
        return x0;
    }
    int getY0(){
        return y0;
    }
    int getCor(){
        return cor;
    }
    virtual int validaMov (int x1, int y1, int corr)= 0;
    virtual int possoPularPeca()=0;
    virtual string getSimbolo()=0;
};
#endif
