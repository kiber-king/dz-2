#pragma once
#ifndef dz 2_H
#define dz 2_H
#include <iostream>
#include <random>
using namespace std;
int random(int a);
void map(int*arr, unsigned size, int (*change)(int));
void sortub(int* arr, unsigned size);
void sortvozr(int* arr, unsigned size);
void inverse(int* arr, unsigned size);

#endif
