//
//  main.cpp
//  xadres2.0
//
//  Created by Fernando Brambilla de Mello on 24/05/14.
//  Copyright (c) 2014 Fernando Brambilla de Mello. All rights reserved.
//

#include "Peao.h"
#include "Peca.h"
#include "Bispo.h"
#include "Tabuleiro.h"
#include "Exeception.h"
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <term.h>
using namespace std;


int main(int argc, const char * argv[])
{    
    Tabuleiro t;
    while(1)
    {
        try
        {
            
            t.printt();
            int x0,y0,x1,y1;
            cout << "Digite a Linha e a Coluna onde esta a peça:";
            cin >> x0 >> y0;
            cout << endl << "Digite a Linha e a Coluna de destino da peça:";
            cin >> x1 >> y1;
            cout <<endl<<endl<<endl<<endl<<endl ;
            t.move(x0, y0, x1, y1);
            
        }
        catch(Exception *p)
        {
            p->getMsg();
            cout << p->getMsg()<< endl;
        }
    }
}

