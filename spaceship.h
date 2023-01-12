

////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////



#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#include"fireballs.h"

using namespace std;

//spaceship abstract class/base class
class spaceship
{
protected://cuz its base class ; inheritance ; gives access to derived classes
	short xloc, yloc;//data members
	static short score;
private:
	int size; fireballs* f;
public:
	void set_size(int);
	int get_size();
	spaceship();//default constructor
	spaceship(short xloc, short yloc);//parameterized constructor
	void set_score(short score);//sets the score
	short get_score();//returns score
	virtual void set_xloc_yloc(short xloc, short yloc);//sets the data members to the passed arguments ; setter method
	virtual short get_xloc();//returns xloc ; getter method
	virtual short get_yloc();//returns yloc ; getter method
	virtual void draw() = 0;//pure virtual function draw
	virtual int move(short yloc,int index);//virtual function move, moves the ship vertically from top to down.
	virtual void fire(short,short);//virtual function fire
	//virtual void system_cls(short xloc, short yloc) = 0;//pure virtual function system_cls
};



