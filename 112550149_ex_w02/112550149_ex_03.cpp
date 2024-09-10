// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, evaluation;
	printf("ax^2 + bx + c\n");
	printf("Input the coefficients: a b c\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("'%dx^2%+dx%+d'", a, b, c);
	evaluation = b * b - 4 * a * c;
	if (evaluation > 0) {
		printf("has two distinct roots.\n");
	}
	else if (evaluation == 0) {
		printf("has double roots.\n");
	}
	else {
		printf("has no real roots.\n");
	}
	return 0;
}

