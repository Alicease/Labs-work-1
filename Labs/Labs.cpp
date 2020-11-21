#include <iostream>
#include "Funct.h"
#include <ctime>

int main()
{
	clock_t start = clock();
	srand(time(NULL));
	int	t[100]{ 0 };
	int n = 25;
	menu(t, n);
	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("The time: %f seconds\n", seconds);
}
