

////////////////////////***********	BSEF19M003	***********///////////////////////
////////////////////////***********	LAIBA KAMAL	***********///////////////////////


#include "fireballs.h"


fireballs::fireballs()
{
	s = 100;
	arr = new int[s];
	for (int i = 0; i < s; i++)
		arr[i] = 0;
}
void fireballs::set_int(int element, int index)
{
	arr[index] = element;
}
void fireballs::fire()
{
	//do
}
