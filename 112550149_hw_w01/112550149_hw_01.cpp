// STUDENT NUMBER: 112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Input the height value
    printf("Enter the height in cm: ");
    float height;
    scanf("%f", &height);

    //Validate the input, the line must contain one floating point, H(100 <= H <= 200)--the height in cm.
    while (height<100 || height > 200) {
        printf("ERROR! Height must be between 100 cm and 200 cm.\n");
        printf("Please enter the height in cm again: ");
        scanf("%f", &height);
    }
    // Calculate standard body weight for men and women
    float male_weight = (height - 80) * 0.7;
    float female_weight = (height - 70) * 0.6;

    // Calculate normal weight range
    float male_lower_bound = male_weight - (male_weight * 0.1);
    float male_upper_bound = male_weight + (male_weight * 0.1);
    float female_lower_bound = female_weight - (female_weight * 0.1);
    float female_upper_bound = female_weight + (female_weight * 0.1);

    // Print the results
    printf("For men with a height of %.1fcm, a body weight between %.1fkg and %.1fkg is considered a normal weight range.\n", height, male_lower_bound, male_upper_bound);
    printf("For women with a height of %.1fcm, a body weight between %.1fkg and %.1fkg is considered a normal weight range.\n", height, female_lower_bound, female_upper_bound);

    return 0;
}
