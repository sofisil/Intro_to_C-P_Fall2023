// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int day = 4;
	//case structure beggins here
	switch (day)
	{
	case 6:
		printf("Today is Saturday!");
		break;
	case 7:
		printf("Today is Sunday!");
		break;
	default:
		printf("Looking forward to the weekend!");
		break;
	}
	//output "Looking forward to the weekend~"
    return 0;
}
