#include <iostream>
#include "Funct.h"
using namespace std;
void inpt_size(int* n)
{
	cout << "How much size of 'n' you want input? ";
	cin >> *n;
}
void input_rand(int* a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 101 - 50;

}
void progr_rand(int* a, int *n)
{
	int p,step;
	cout << "Enter p0: ";
	cin >> p;
	cout << endl << "Enter Step: ";
	cin >> step;
	for (int i = 0; i < *n; i++)
	{
		if ((p + step * i) > 50)
		{
			*n = i;
		}
		a[i] = p + step * i;
	}
}
void key_input(int* a, int n)
{
	cout<< "Enter your array [-50,50]";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void array_output(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
	cout << endl;
}
