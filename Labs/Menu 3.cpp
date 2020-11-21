#include <iostream>
#include <conio.h>
#include "Funct.h"
#include "sort.h"
using namespace std;
void menu_sort(int* a, int n)
{
	char c;
	string option[5] = { "BS1","BS2","BS3","Quick sort","Stat Sort"};
	int op = 0;
	int max_op = 5;
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
				sort1(a,n);
				break;
			case 1:
				sort2(a, n);
				break;
			case 2:
				sort3(a, n);
				
				break;
			case 3:
				sort4 (a,0,n-1);

				break;
			case 4:
				sort5(a, n);

				break;
			}
	}
}