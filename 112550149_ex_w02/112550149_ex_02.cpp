// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	// Define the variable for year to introduce
	int year; 
	printf("Please input and AD year: ");
	scanf("%d", &year);
	//Conditional structure that will evaluate the year introduced and print according the case
	if(year%400==0||year%4==0 && year % 100 != 0)
	{
		printf("%d is a leap year\n",year);
	}
	else 
	{
		printf("%d is not a leap year\n", year);
	}
	return 0;
}
