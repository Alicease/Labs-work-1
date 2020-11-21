#include <iostream>
#include <conio.h>
#include "Funct.h"
#include "Array_mass.h"
using namespace std;
void menu(int* a, int n)
{
	char c;
	string option[3]  = { "Input","SOrt","Output" };
	int op = 0;
	int max_op = 3;
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
		if (c==13)
			switch (op){
			case 0:
				menu_inpt(a,&n);
				break;
			case 1:
				menu_sort(a, n);
				break;
			case 2:
				array_output(a,n);
				system("pause");
				break;
			}
	}
}