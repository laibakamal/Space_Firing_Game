

////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////



#pragma once
#include"spaceship.h"
#include<iostream>
#include<windows.h>
#include<conio.h>
#include"fireballs.h"

using namespace std;

class starship :public spaceship//public inheritance from spaceship class
{
private:
	int sizestar; fireballs* f;
public:
	starship();
	void set_size(int);
	int get_size();
	void draw();//pure virtual from spaceship class.......draws starship
	int move(short y, int index); //moves the ship vertically from top to down.
	void fire(short,short);//virtual function fire
};