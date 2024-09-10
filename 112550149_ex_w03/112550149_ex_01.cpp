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
    int binary[6];
    int temp = num_10;
    int i = 5;
    // Convert the random number to binary
    while (i >= 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i--;
    }
    // Note that the output should be a decimal integer so we need to make the conversion
    int num_2 = 0;
    for (int j = 5; j >=0; j--) {
        num_2 = num_2+(binary[j]*pow(10,5-j));
    }
    // Print the random number in decimal and binary
    printf("Decimal number: %d\n", num_10);
    printf("Binary number: %d\n", num_2);
    return 0;
}
