// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer, guess, lower_bound = 0, upper_bound = 19;
    srand(time(NULL));
    answer = rand() % 20;
    while (1) {
        guess = rand() % (upper_bound - lower_bound + 1) + lower_bound;
        if (guess == answer) {
            printf("You win, answer is %d\n", answer);
            break;
        } else if (guess > answer) {
        	printf("Guess %d, too large.\n", guess);
            upper_bound = guess - 1;
        } else {
            printf("Guess %d, too small.\n", guess);
            lower_bound = guess + 1;
        }
    }
    return 0;
}
