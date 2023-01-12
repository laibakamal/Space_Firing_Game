


////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////



#pragma once
#include<iostream>
#include<windows.h>
#include<conio.h>
#include"fireballs.h"
#include"spaceship.h"
#include"fireballs.h"


using namespace std;

class rocket:public spaceship
{
private:
	//fireballs f;
	int lives;//number of lives of player ; data member
public:
	rocket();
	rocket(int lives);
	void setlives(int lives);//sets number of lives of player
	void set_xloc_yloc(int xloc, int yloc);//overriden function.......sets the data members to the passed arguments ; setter method
	short get_xloc();//overriden function.......returns xloc ; getter method
	short get_yloc();//overriden function.......returns yloc ; getter method
	int getlives();//returns number of lives of player ; getter
	void draw();//pure virtual from spaceship class.......draws the player's rocket
	void move_rocket(spaceship* star, spaceship* martian, rocket r, int x_me, int y_me, int x_mr, int y_mr);//overriden function.......moves the player's rocket up, down, right and left
	void draw_objects(spaceship* star, spaceship* martian, rocket r, int x_de, int y_de, int x_dr, int y_dr, int num_of_stars, int num_of_martian);
	void draw_border();//draws boundaries
	void status();//displays score and lives 
	void fire(short, short);//virtual function fire

	//void fire(short,short,short);//virtual function fire
};


//void move_objects(spaceship* star, spaceship* martian, rocket r, int x_me, int y_me, int x_mr, int y_mr);//3