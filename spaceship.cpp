


////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////


#include "spaceship.h"


spaceship::spaceship()//default constructor
{
	xloc = yloc = 0; 
	size = 100;
	f = new fireballs[size];
	for (int i = 0; i < size; i++)
		f->set_int(0, i);
}
spaceship::spaceship(short xloc, short yloc)//parameterized constructor
{
	this->xloc = xloc; this->yloc = yloc;
}

void spaceship::set_size(int s)
{
	size = s;
}
int spaceship::get_size()
{
	return size;
}

void spaceship::set_score(short score)//sets the score
{
	this->score = score;
}
short spaceship::get_score()//returns score
{
	return score;
}
void spaceship::set_xloc_yloc(short xloc, short yloc)//sets the data members to the passed arguments ; setter method
{
	this->xloc = xloc; this->yloc = yloc;
}
short spaceship::get_xloc()//returns xloc ; getter method
{
	return xloc;
}
short spaceship::get_yloc()//returns yloc ; getter method
{
	return yloc;
}
int spaceship::move(short yloc,int index)//virtual function move, moves the ship vertically from top to down.
{
	yloc++; return yloc;
}
void spaceship::fire(short xloc, short yloc)//virtual function fire
{
	//fire
}


short spaceship::score = 0;