// STUDENT NUMBER: 112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int main() {
    int budget;
    int p4 = 0;
    int p5 = 0;
    int p6 = 0;
    printf("Enter your budget: ");
    scanf("%d", &budget);
    if (budget % 4 == 0) {
        p4 = budget / 4;
    }
    if (budget % 4 == 1) {
        p4 = (budget / 4)-1;
        p5 = 1;
    }
    if (budget % 4 == 2) {
        p4 = (budget / 4)-1;
        p6 = 1;
    }
    if (budget % 4 == 3) {
        p4 = (budget / 4)-2;
        p5 = 1;
        p6 = 1;
    }
    printf("You can buy: %d pens\n", p4 + p5 + p6);
    printf("\nDetails:\n");
    printf("========\n");
    printf("Pens of 4$: %d\n", p4);
    printf("Pens of 5$: %d\n", p5);
    printf("Pens of 6$: %d\n", p6);
    return 0;
}
