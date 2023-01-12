


////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////



#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#include"spaceship.h"
#include"fireballs.h"


using namespace std;

class martianship :public spaceship//public inheritance from spaceship class
{
private:
	int sizemartian; fireballs* f;
public:
	martianship();
	void set_size(int);
	int get_size();
	void draw();//pure virtual from spaceship class.......draws martianship
	int move(short y, int index); 
	void fire(short, short);//virtual function fire
};





