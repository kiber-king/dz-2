#include "дз 2.h"

void map(int* arr, unsigned size, int (*change)(int))
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = change(arr[i]);
	}
}

int random(int a)
{
	a = rand() % 10;
	return a;
}

void sortvozr(int* arr, unsigned size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void inverse(int* arr, unsigned size)
{
	for (int i = 0; i < size / 2; i++)
	{
		swap(arr[i], arr[size - i - 1]);
	}
}

void sortub(int* arr, unsigned size)
{
	int min = 1000000;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
