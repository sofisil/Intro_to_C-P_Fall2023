// STUDENT NUMBER: 112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
    int main() {
        int a, b, c;
        float cos_a, cos_b, cos_c;
        // Input three positive integers representing the sides
        scanf("%d %d %d", &a, &b, &c);
        // Check if the three sides can form a triangle
        if (a + b > c && a + c > b && b + c > a) {
            printf("%d %d %d can form a triangle.\n", a, b, c);
            // Check the angles of the triangle using Law of cosines
            cos_a=(b*b+c*c-a*a)/(2.0*b*c);
            cos_b=(a*a+c*c-b*b)/(2.0*a*c);
            cos_c=(a*a+b*b-c*c)/(2.0*a*b);
            //Check for a right triangle (one of its angles is equal to 90 degrees)
            if (cos_a == 0.0 || cos_b == 0.0 || cos_c == 0.0) {
                printf("%d %d %d can form a right triangle.\n", a, b, c);
            }
            //Check for an obtuse triangle (one of its angles is more than 90 degrees)
            else if (cos_a < 0.0 || cos_b < 0.0 || cos_c < 0.0) {
                printf("%d %d %d can form an obtuse triangle.\n", a, b, c);
            }
            //Check for an acute triangle (all of its angles are less than 90 degrees)
            else{
                printf("%d %d %d can form an acute triangle.\n", a, b, c);
            }
            // Check for equilateral triangle (3 equal sides)
            if (a == b && b == c) {
                printf("%d %d %d can form an equilateral triangle.\n", a, b, c);
            }
            // Check for isosceles triangle (2 equal sides)
            if (a == b || a == c || b == c) {
                printf("%d %d %d can form an isosceles triangle.\n", a, b, c);
            }
            // Check for scalene triangle (no equal sides)
            if (a != b && a != c && b != c) {
                printf("%d %d %d can form a scalene triangle.\n", a, b, c);
            }
        }
        // If cannot form a triangle, the program just print that
        else {
            printf("%d %d %d cannot form a triangle.\n", a, b, c);
        }
        return 0;
    }
