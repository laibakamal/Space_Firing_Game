


////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////




#include "martianship.h"

martianship::martianship()
{
	sizemartian= 100;
	f = new fireballs[sizemartian];
	for (int i = 0; i < sizemartian; i++)
		f->set_int(0, i);
}


void martianship::set_size(int s)
{
	sizemartian = s;
}
int martianship::get_size()
{
	return sizemartian;
}



void martianship::draw()//pure virtual from spaceship class.......draws martianship
{
	HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
	COORD XY0 = { xloc,yloc };//sets x,y
	SetConsoleCursorPosition(display, XY0);//sets cursor position
	cout << "77    77";//cout
	COORD XY1 = { xloc - 2,yloc + 1 };//sets x,y
	SetConsoleCursorPosition(display, XY1);//sets cursor position
	cout << "||  ||||  ||";//cout
	COORD XY2 = { xloc - 2,yloc + 2 };//sets x,y
	SetConsoleCursorPosition(display, XY2);//sets cursor position
	cout << "||  ||||  ||";//cout
	COORD XY3 = { xloc,yloc + 3 };//sets x,y
	SetConsoleCursorPosition(display, XY3);//sets cursor position
	cout << "--    --";//cout
	COORD XY4 = { xloc,yloc + 4 };//sets x,y
	SetConsoleCursorPosition(display, XY4);//sets cursor position
	cout << "[]    []";//cout
}


int martianship::move(short y, int index)
{
	if (index <= 15)
	{
		y++;
	}
	if (index > 15)
	{
		y--;
	}
	return y;
}



void martianship::fire(short x_mef, short y_mef)//virtual function fire
{
	HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
	for (int i = 0; i < 30; i++)
	{
		COORD XY0 = { x_mef,y_mef };//sets x,y
		SetConsoleCursorPosition(display, XY0);//sets cursor position
		cout << "o";//cout
		y_mef++;
	}
}