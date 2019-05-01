//
//  Exeception.h
//  xadres2.0
//
//  Created by Fernando Brambilla de Mello on 24/05/14.
//  Copyright (c) 2014 Fernando Brambilla de Mello. All rights reserved.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Exception
{
private:
	int Codigo;
	string Msg;
    
public:
	
	Exception(int Cod, string M)
	{
		Codigo = Cod;
		Msg = M ;
	};
    
	void setCodigo(int Cod)
	{
        Codigo = Cod;
	};
    
	void setMsg(string M)
	{
        Msg = M ;
	};
    
	int getCodigo()
	{
        return Codigo;
	};
    
	string getMsg()
	{
        return Msg;
	};
};

