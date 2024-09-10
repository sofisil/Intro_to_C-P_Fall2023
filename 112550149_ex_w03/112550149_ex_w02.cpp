// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int answer, guess, lower_bound = 0, upper_bound = 19;
    // Seed the random number generator with the current time
    srand(time(NULL));
    //acording with the problem requirement the range is from 0 to 19
    answer = rand() % 20; // it generates a random in range [0, 20)
    //the folowing process will be executed in a loop until it guess the answer
    while (1) {
        guess = rand() % (upper_bound - lower_bound + 1) + lower_bound;
        if (guess == answer) {
            printf("You win, answer is %d\n", answer);
            break;//exit the loop
        }
        //if the answer is toolarge it reduces the upper bound
        else if (guess > answer) {
            printf("Guess %d, too large.\n", guess);
            upper_bound = guess - 1;
        }
        //if the answer is too small it increases the lower bound
        else {
            printf("Guess %d, too small.\n", guess);
            lower_bound = guess + 1;
        }
    }
    return 0;
}