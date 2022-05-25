/*
Program:  Ptr2.c
Made by:  Garrett Stanifer
Date: 4/28/2021
Recieves a one-dimensional array and counts the number of negative values and also sums the negative values.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Prototype
void negatives(int numbers[], int elements, int* countPtr, int* sumPtr);


int main()
{
	int numbers[10];
	int k=0, count=0, sum=0;
	int elements = 10;
	srand(time(NULL));
	//Initialize and print array
	printf("Original Array:\n");
	for (k = 0; k < 10; k++)
	{
		numbers[k] = rand() % 21 - 10;
		printf("%5d", numbers[k]);
	}
	negatives(numbers, elements, &count, &sum);  //Call statement
	printf("\nThere are %d negative numbers in the array.\n", count);
	printf("The sum of the negative numbers is %d\n", sum);
	return 0;
}

//
void negatives(int numbers[], int elements, int* countPtr, int* sumPtr)
{
	int i;

	for (i = 0; i < elements; i++)
	{
		if (numbers[i] < 0)
		{
			*sumPtr += numbers[i];
			(*countPtr)++;
		}
	}
}
