// STUDENT NUMBER:112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
    int main() {
        // Seed the random number generator with the current time
        srand(time(NULL));
        // Generate a random number between 0 and 63
        int num_10 = rand() % 64;
        // Initialize variables for binary conversion
        int num_2=0;
        int temp = num_10;
        int i = 0;
        int power_of_10 = 1;
        //process for calculation of the binary representaion
        for (i = 0; i <= 5; i++) {
            num_2 = num_2 + (temp % 2) * power_of_10;
            temp = temp / 2;
            power_of_10 = power_of_10 * 10;
        
        }
        // Print the random number in decimal and binary
        printf("Decimal number: %d\n", num_10);
        printf("Binary number: %d\n", num_2);
        return 0;
    }
