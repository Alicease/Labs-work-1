#include <iostream>
#include <conio.h>
#include "Array_mass.h"
#include "Funct.h"
using namespace std;
void menu_inpt(int* a, int *n)
{
	char c;
	string option[4] = { "Input size","Random input","Random progr input","Keyboard input" };
	int op = 0;
	int max_op = 4;
	while (true)
	{
		system("cls");
		for (int i = 0; i < max_op; i++)
		{
			if (i == op)
				cout << "* ";
			else
				cout << "  ";
			cout << option[i] << endl;
		}
		c = _getch();
		if (c == 27)
			break;
		else
		{
			if (c == 72)
			{
				op = (op - 1 + max_op) % max_op;
			}
			if (c == 80)
			{
				op = (op + 1 + max_op) % max_op;
			}
		}
		if (c == 13)
			switch (op) {
			case 0:
				inpt_size(n);
				break;
			case 1:
				input_rand(a, *n);
				break;
			case 2:
				progr_rand(a, n);
				break;
			case 3:
				key_input(a,*n);
				break;
			}
	}
}