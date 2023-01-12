


////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////


#include<iostream>
#include<windows.h>
#include<conio.h>
#include"spaceship.h"
#include"starship.h"
#include"martianship.h"
#include"rocket.h"

using namespace std;

void draw_textual_rocket();//1



//main
int main()
{
	draw_textual_rocket();
	char start, loop_to_play_again = 'y';
	cout << "\t\t\tPlease Press s to start game!";
	start = _getch();
	system("CLS");
	while (loop_to_play_again == 'y')
	{
		if (start == 's')
		{
			spaceship* s, * m; int x_loc, y_loc; rocket rock; rock.setlives(3); rock.set_score(0);
			s = new starship(); m = new martianship();  x_loc = 69, y_loc = 2;
			s->set_xloc_yloc(x_loc, y_loc); m->set_xloc_yloc(x_loc, y_loc);
			rock.draw_objects(s, m, rock, s->get_xloc(), s->get_yloc(), 105, 30, 3, 2);
			Sleep(500);
			rock.move_rocket(s, m, rock, s->get_xloc(), s->get_yloc(), 105, 30);
			system("CLS");
			if (rock.get_score() == 100)
			{
				//HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
				//COORD XY0 = { 60,15 };//sets x,y
				//SetConsoleCursorPosition(display, XY0);//sets cursor position
				cout << "\n\n\n\n\t\t\t\t\t\t***Score board***\n   \t\t\t\t\t\tYour SCORE: " << rock.get_score() << endl << "   \t\t\t\t\t\tYour LIVES: " << rock.getlives() << endl;
				cout << "\t\t\t\t\t\tYou've won!\n";
			}
			if (rock.getlives() == 0)
			{
				//HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//funtion to handle console
				//COORD XY0 = { 60,15 };//sets x,y
				//SetConsoleCursorPosition(display, XY0);//sets cursor position
				cout << "\n\n\n\n\t\t\t\t\t\t***Score board***\n   \t\t\t\t\t\tPlayer's SCORE: " << rock.get_score() << endl << "   \t\t\t\t\t\tPlayer's LIVES: " << rock.getlives() << endl;
				cout << "\t\t\t\t\t\tYou've lost!\n";
			}
			cout << "\n\t\t\t\t\tEnter y if you wanna play again.\n\t\t\t\t\tPress any other key to end the game!\n";
			 loop_to_play_again=_getch(); system("CLS");
		}
		else
		{
			cout << "\n\t\t\tINVALID INPUT!\n\t\t\tPlease Press s to start game!";
			start = _getch(); system("CLS");
		}
	}
	return 0;
}








//draw textual rocket
void draw_textual_rocket()
{
	short x = 70, y = 1;
	HANDLE display = GetStdHandle(STD_OUTPUT_HANDLE);//function to handle console
	y++;//cursor moves one step down
	COORD XYa = { x + 4,y };//sets x,y
	SetConsoleCursorPosition(display, XYa);//sets cursor position
	cout << "_#_.";
	y++;//cursor moves one step down
	COORD XY = { x + 4,y };//sets x,y
	SetConsoleCursorPosition(display, XY);//sets cursor position
	cout << "~HI~";
	y++;//cursor moves one step down
	COORD XY0 = { x,y };//sets x,y
	SetConsoleCursorPosition(display, XY0);//sets cursor position
	cout << "~BSEF19M003";
	y++;//cursor moves one step down
	COORD XY1 = { x,y };//sets x,y
	SetConsoleCursorPosition(display, XY1);//sets cursor position
	cout << "~LAIBA KAMAL";
	y++;//cursor moves one step down
	COORD XY2 = { x ,y };//sets x,y
	SetConsoleCursorPosition(display, XY2);//sets cursor position
	cout << "~PROJECT:)(:";
	y++;//cursor moves one step down
	COORD XY3 = { x - 9,y };//sets x,y
	SetConsoleCursorPosition(display, XY3);//sets cursor position
	cout << "--OBJECT ORIENTED PROGRAMMING--";
	y++;//cursor moves one step down
	COORD XY5 = { x - 11,y };//sets x,y
	SetConsoleCursorPosition(display, XY5);//sets cursor position
	cout << "Instructor:Ma'am Natalia Chaudhry<3";
	y++;//cursor moves one step down
	COORD XY4 = { x - 5,y };//sets x,y
	SetConsoleCursorPosition(display, XY4);//sets cursor position
	cout << " --SPACE FIRING GAME:)--";
	y++;//cursor moves one step down
	COORD XY6 = { x ,y };//sets x,y
	SetConsoleCursorPosition(display, XY6);//sets cursor position
	cout << " _01-12-2020_";
	y++;//cursor moves one step down
	COORD XY7 = { x + 1 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY7);//sets cursor position
	cout << " _Tuesday_";
	y++;//cursor moves one step down
	COORD XY8 = { x + 3 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY8);//sets cursor position
	cout << "Loading..";
	y++;//cursor moves one step down
	COORD XY9 = { x + 4 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY9);//sets cursor position
	cout << "10  9";
	y++;//cursor moves one step down
	COORD XY10 = { x + 6 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY10);//sets cursor position
	cout << "87";
	y++;//cursor moves one step down
	COORD XY11 = { x + 6 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY11);//sets cursor position
	cout << "65";
	y++;//cursor moves one step down
	COORD XY12 = { x + 6 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY12);//sets cursor position
	cout << "43";
	y++;//cursor moves one step down
	COORD XY13 = { x + 6 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY13);//sets cursor position
	cout << "21";
	y++;//cursor moves one step down
	COORD XY14 = { x + 2 ,y };//sets x,y
	SetConsoleCursorPosition(display, XY14);//sets cursor position
	cout << "YAAHOOOOO!";
	y++;//cursor moves one step down
	COORD XY15 = { x  ,y };//sets x,y
	SetConsoleCursorPosition(display, XY15);//sets cursor position
	cout << "THE WAIT ENDS!";
	y++;//cursor moves one step down
	COORD XY16 = { x - 2  , y };//sets x,y
	SetConsoleCursorPosition(display, XY16);//sets cursor position
	cout << "HERE WE GOOOOOOOO!";
	y = y + 2;//cursor moves two step down
	COORD XY18 = { x, y };//sets x,y
	SetConsoleCursorPosition(display, XY18);//sets cursor position
	cout << "| | | | | | |";
	y = y + 3;//cursor moves three step down
	COORD XY17 = { x  , y };//sets x,y
	SetConsoleCursorPosition(display, XY17);//sets cursor position
	cout << "S  T  A  R  T";

	cout << "\n\n\n\n\n\n\n\n";
}

