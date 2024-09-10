// STUDENT NUMBER: 112550149
// NAME: FRANCO VERA VICTOR HUGO
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
// Enumerate the states of the finite state machine (FSM)
enum State {
    Start,
    S1,
    S2,
    S3,
    S4,
    S5,
    S6,
    Final
};
// Function that implements the FSM. It takes the current state and an input, and returns the next state.
enum State fsm(enum State state, int input) {
    switch (state) {
        case Start:
            if (input == 60 || input == 43) return S1;
            if (input == 10) return S3;
            if (input == 34 || input == 16) return S5;
            return Start;
        case S1:
            if (input == 30 || input == 87) return S2;
            if (input == 15) return S6;
            return S1;
        case S2:
            if (input == 23 || input == 99) return Final;
            return Start;
        case S3:
            return S2;
        case S4:
            return Final;
        case S5:
            if (input == 8) return S4;
            if (input == 92) return S6;
            return S5;
        case S6:
            if (input == 40 || input == 56 || input == 62) return S4;
            return S5;
        case Final:
            return Final;
    }
}

int main() {
    int n, i, input;
    enum State state = Start; // Initialize the state to Start
    scanf("%d", &n);  // First line contains one integer N, indicated how many transition numbers.
    for(i = 0; i < n; i++) {
        scanf("%d", &input); // Second line contains N integers seperated by space, indicated transition number Ti
        state = fsm(state, input);
    }
    switch(state){ //This stich will output the last state after transition numbers
        case Start: printf("You are in Start.\n"); break;
        case S1: printf("You are in S1.\n"); break;
        case S2: printf("You are in S2.\n"); break;
        case S3: printf("You are in S3.\n"); break;
        case S4: printf("You are in S4.\n"); break;
        case S5: printf("You are in S5.\n"); break;
        case S6: printf("You are in S6.\n"); break;
        case Final: printf("You are in Final.\n"); break;
    }

    return 0;
}

