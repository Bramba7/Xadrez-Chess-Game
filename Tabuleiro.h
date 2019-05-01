//
//  Tabuleiro.h
//  xadres2.0
//
//  Created by Fernando Brambilla de Mello on 24/05/14.
//  Copyright (c) 2014 Fernando Brambilla de Mello. All rights reserved.
//

#ifndef xadres2_0_Tabuleiro_h
#define xadres2_0_Tabuleiro_h
#include "Peca.h"
#include "Cavalo.h"
#include "Rei.h"
#include "Rainha.h"
#include "Torre.h"
#include "Bispo.h"
#include "Peao.h"
#include "Exeception.h"
#include <iostream>
#include <string>

using namespace std;
class Tabuleiro
{
private:
	Peca * tab[8][8];
    int tab2[8][8];
public:
	Tabuleiro()
    {
		for(int i=0; i<8; i++){
			for(int j=0; j<8; j++){
                tab[i][j]= NULL;
                
                }
            for(int j=0;j<2;j++)
                tab2[i][j]=2;
            for(int j=2;j<6;j++)
                tab2[i][j]=0;
            
            for(int j=6;j<8;j++)
                tab2[i][j]=1;
        }
        for (int k=0; k<8; k++) {
            tab[k][1]=new Peao(k,1,0);//Peao Preto
        }
        for (int k=0; k<8; k++) {
            tab[k][6]=new Peao(k,6,1);//Peao braonco
        }
         tab[2][0]=new Bispo(2,0,0);
         tab[5][0]=new Bispo(5,0,0);// Bispo Preto
         tab[2][7]=new Bispo(2,7,1);
         tab[5][7]=new Bispo(5,7,1);// Bispo Branco
        
         tab[0][0]=new Torre(0,0,0);
         tab[7][0]=new Torre(7,0,0);// Torre Preto
         tab[0][7]=new Torre(0,7,1);
         tab[7][7]=new Torre(7,7,1);// Torre Branco
        
         tab[1][0]=new Cavalo(1,0,0);
         tab[6][0]=new Cavalo(6,0,0);// Cavalo Preto
         tab[1][7]=new Cavalo(1,7,1);
         tab[6][7]=new Cavalo(6,7,1);// Cavalo Branco
        
         tab[4][0]=new Rainha(4,0,0);// Rainha Preta
         tab[4][7]=new Rainha(4,7,1);// Rainha Branca
        
         tab[3][0]=new Rei(3,0,0);   // Rei Preto
         tab[3][7]=new Rei(3,7,1);   // Rei Branco

    }
   
	
	void printt()
	{
        if(jogador == 0){
           cout<< "Jogador = Branco "<< endl;
        }
        else{
            cout<< "Jogador = Preto "<< endl;
        }
        printf("  0 1 2 3 4 5 6 7 \n");
		for(int i=0; i<8; i++)
		{
			for(int j=0; j<9; j++)
			{
				
                if(j==8){
                    printf("|");
                }
                else{
                    if(j==0){
                        printf("%i",i);
                    }

                    printf("|%s", tab[i][j]==NULL ?" ":tab[i][j]->getSimbolo().c_str());
                    
                }
                
            }
            printf("\n");
            
		}
	}
    
	void move(int x0, int y0, int x1, int y1)
	{
        if(x0<0||x0>7||y0<0||y0>7||x1<0||x1>7||y1<0||y1>7)
		{
            throw new Exception(0,"Erro de Limites");
		}
        if(!tab[x0][y0]->validaMov(x1, y1,tab2[x1][y1]))
        {
            throw new Exception(1,"Movimendo invalido");
        }
        
        
		tab[x1][y1] = tab[x0][y0];
		tab[x0][y0] = NULL;
		tab2[x1][y1] = tab2[x0][y0];
		tab2[x0][y0] = NULL;
        if (jogador == 1){
            jogador = 0;
        }
        else {
        jogador = 1;}
      

        
    }
        
};


#endif
