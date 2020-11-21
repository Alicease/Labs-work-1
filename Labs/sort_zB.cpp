#include <iostream>
#include "sort.h"
using namespace std;

void sort1(int* a, int n)
{
	bool f = true;
	int i, j, t;
	i = 0;
	while (f)
	{
		f = false;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				f = true;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		i++;
	}

}

void sort2(int* a, int n)
{
	bool f = true;
	int i, j, t;
	i = 0;
	while (f)
	{
		f = false;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				f = true;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		i++;
	}

}

void sort3(int* a, int n)
{
	bool f = true;
	int i, j, t;
	i = 0;
	while (f)
	{
		f = false;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				f = true;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		i++;
	}

}
void sort4(int* p_arr, int first, int last)
{
	int i = first, j = last;
	int pivot = p_arr[(first + last) / 2];
	do
	{
		while (p_arr[i] < pivot)
		{
			++i;
		}

		while (p_arr[j] > pivot)
		{
			--j;
		}

		if (i <= j)
		{
			if (i < j)
				std::swap(p_arr[i], p_arr[j]);
			i++;
			j--;
		}

	} while (i <= j);


	if (i < last)
	{
		sort4(p_arr, i, last);
	}
	if (j > first)
	{
		sort4(p_arr, first, j);
	}

}

void sort5(int* a, int n)
{
	int array[100] = { 0 };
	int i=0,j = 0;
	for (i=0;i<n;i++)
	{
		array[a[i] + 50]++;
	}
	for (i = 0; i < 100; i++)
	{
		while (array[i])
		{
			a[j] = i - 50;
			j++;
			array[i]--;
		}
	}
}