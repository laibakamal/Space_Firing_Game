

////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////



#include "rocket.h"

int check_if_star_hits_rock = 0;

rocket::rocket()
{
	lives = 3;
}
rocket::rocket(int lives)
{
	this->lives = lives;
}
void rocket::setlives(int lives)//sets number of lives of player
{
	this->lives = lives;
}
void rocket::set_xloc_yloc(int xloc, int yloc)//overriden function.......sets the data members to the passed arguments ; setter method
{
	this->xloc = xloc; this->yloc = yloc;
}
short rocket::get_xloc()//overriden function.......returns xloc ; getter method
{
	return xloc;
}
short rocket::get_yloc()//overriden function.......returns yloc ; getter method
{
	return yloc;
}
int rocket::getlives()//returns number of lives of player ; getter
{
	return lives;
}
void rocket::draw()//pure virtual from spaceship class.......draws the player's rocket
{
	HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
	COORD XY0 = { xloc,yloc };//sets x,y
	SetConsoleCursorPosition(display, XY0);//sets cursor position
	cout << "_______||_______";//cout
	COORD XY1 = { xloc,yloc + 1 };//sets x,y
	SetConsoleCursorPosition(display, XY1);//sets cursor position
cout << "_____||||||_____";//cout
COORD XY2 = { xloc,yloc + 2 };//sets x,y
SetConsoleCursorPosition(display, XY2);//sets cursor position
cout << "____||||||||____";//cout
COORD XY3 = { xloc,yloc + 3 };//sets x,y
SetConsoleCursorPosition(display, XY3);//sets cursor position
cout << "___||||||||||___";//cout
COORD XY4 = { xloc + 6,yloc + 4 };//sets x,y
SetConsoleCursorPosition(display, XY4);//sets cursor position
cout << "[][]";//cout
}





void rocket::draw_border()
{
	short y = 2;
	for (int i = 0; i < 35; i++)//left line
	{
		HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
		COORD XY0 = { 65 ,y };//sets x,y
		SetConsoleCursorPosition(display, XY0);//sets cursor position
		cout << "M";//cout
		y++;
	}
	y = 1;
	for (int i = 0; i < 36; i++)//right line
	{
		HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
		COORD XY0 = { 165 ,y };//sets x,y
		SetConsoleCursorPosition(display, XY0);//sets cursor position
		cout << "M";//cout
		y++;
	}
	short x = 65;
	for (int i = 0; i < 25; i++)//bottom line
	{
		HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
		COORD XY0 = { x ,36 };//sets x,y
		SetConsoleCursorPosition(display, XY0);//sets cursor position
		cout << "M003";//cout
		x += 4;
	}
	x = 65;
	for (int i = 0; i < 25; i++)//top line
	{
		HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
		COORD XY0 = { x ,1 };//sets x,y
		SetConsoleCursorPosition(display, XY0);//sets cursor position
		cout << "M003";//cout
		x += 4;
	}
}




void rocket::status()//displays score and lives 
{
	HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
	COORD XY0 = { 2,2 };//sets x,y
	SetConsoleCursorPosition(display, XY0);//sets cursor position
	cout << "***Score board***\n   Player's SCORE: " << score << endl << "   Player's LIVES: " << lives << endl << "\n   =========================\n\n   ***Guidelines for player***\n   1-Control your rocket using arrow keys!\n\n   2-Press 'f' to shoot your enemies!\n\n   3-Shoot small spaceship(starship) ONLY ONE TIME times to\n   destroy it!\n\n   4-Shoot large spaceship(martianship) ONLY ONE TIME times to\n   desroy it!\n\n   5-You'll get FIVE points on destroying a starship and FIVE\n   on destroying a martianship!\n\n   6-Whenever you're shooted by spaceships TWO TIMES, you'll\n   lose your one  chance(life)!\n\n    7-You'll win if you get 100 score.\n\n    8-You'll loose if you loose all your lives.\n\n   ";
}





void rocket::move_rocket(spaceship* star, spaceship* martian, rocket r, int x_me, int y_me, int x_mr, int y_mr)
{
	int end_game = 0, fire = 0; r.set_xloc_yloc(x_mr, y_mr);
	while (end_game !=1)
	{
		short XMEs = 69,XMEm=92, YMEF;
		for (int i = 0; i < 3; i++)
		{
			YMEF = 6;
			star->fire(XMEs, YMEF); martian->fire(XMEm, YMEF);
			y_me = 0;
			for (int i = 0; i < 30; i++)
			{
				Sleep(50);
				system("CLS");
				draw_border();
				status();
				x_me = 69;
				y_me = star->move(y_me, i); //y_me = martian->move(y_me);
				if (_kbhit())
				{
					char key = _getch(); //key = _getch();
					switch (key)
					{
					case 72: r.set_xloc_yloc(xloc = r.get_xloc(), yloc = r.get_yloc() - 1); break;
					case 80: r.set_xloc_yloc(xloc = r.get_xloc(), yloc = r.get_yloc() + 1); break;
					case 75:  r.set_xloc_yloc(xloc = r.get_xloc() - 1, yloc = r.get_yloc());  break;
					case 77:  r.set_xloc_yloc(xloc = r.get_xloc() + 1, yloc = r.get_yloc());  break;
					}
					if (key == 'f')
					{
						r.set_size(r.get_size() - 1);
						r.fire(xloc = r.get_xloc() + 7, yloc = r.get_yloc());
						if ((star->get_xloc() <= r.get_xloc() + 3) || (star->get_xloc() >= r.get_xloc() + 3))
						{
							score = score + 5;
						}
						else if ((martian->get_xloc() <= r.get_xloc() + 3) || (martian->get_xloc() >= r.get_xloc() + 3))
						{
							score = score + 10;
						}
					}
					draw_objects(star, martian, r, x_me, y_me, xloc = r.get_xloc(), yloc = r.get_yloc(), 3, 2);
				}
				else
				{
					draw_objects(star, martian, r, x_me, y_me, xloc = r.get_xloc(), yloc = r.get_yloc(), 3, 2);
				}
			}
			star->set_size(star->get_size() - 1); martian->set_size(martian->get_size() - 1);
			if ((star->get_xloc() <= r.get_xloc() - 5) || (star->get_xloc() >= r.get_xloc() + 5) || (martian->get_xloc() <= r.get_xloc() - 5) || (martian->get_xloc() >= r.get_xloc() + 5))
			{
				check_if_star_hits_rock = check_if_star_hits_rock + 1;
			}
			XMEs += 45; XMEm += 45;
		}
		if (((check_if_star_hits_rock %2)==0) && (lives > 0))
		{
			lives = lives - 1;
			check_if_star_hits_rock = 0;
		}
		if (score == 100 || lives == 0)
		{
			end_game = 1;
		}
	}
}



void rocket::fire(short x_mef, short y_mef)//virtual function fire
{
	HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
	for (int i = 0; i < 25; i++)
	{
		COORD XY0 = { x_mef,y_mef };//sets x,y
		SetConsoleCursorPosition(display, XY0);//sets cursor position
		cout << "L";//cout
		y_mef--;
	}
}




void rocket::draw_objects(spaceship* star, spaceship* martian, rocket r, int x_de, int y_de, int x_dr, int y_dr, int num_of_stars, int num_of_martian)
{
	for (int i = 0; i < num_of_stars; i++)
	{
		star->set_xloc_yloc(x_de, y_de);
		star->draw();
		//star->fire(x_de, y_de, y_dr);
		x_de += 45;
	}
	x_de = 89;
	for (int i = 0; i < num_of_martian; i++)
	{
		martian->set_xloc_yloc(x_de, y_de);
		martian->draw();
		x_de += 45;
	}
	r.set_xloc_yloc(x_dr,y_dr);
	r.draw();
}




