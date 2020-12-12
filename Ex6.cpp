/*
 * Jae Park
 * 2019-11-19
 * TEJ3M3-01 with Mr. Wong
 * This program tests the adding abilities of the user by asking them to add two positive numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Declaration Section
int choice, num1, num2, answer;


// Function pauseProgram
void pauseProgram() {
    printf("\n\tPress any key to continue...");
    getchar();
}

// Function title
void title(char *programTitle) {
    int len = strlen(programTitle);
    system("cls");
    printf("\n");
    for (int i = 1; i < 40 - len / 2; i++) {
        printf(" ");
    }
    printf("%s\n", programTitle);
}

// Function intro
void intro() {
    title("Calculation Game");
    printf("\n\tThis program will test your math abilities.\n\n");
    pauseProgram();
}

// Function mainMenu
void mainMenu() {
    title("Calculation Game\n\n");
    printf("\t\t\t1. Play Game\n");
    printf("\t\t\t2. Exit\n\n\n");
    printf("\t\t\tEnter 1 or 2: ");
    scanf("%d", &choice);
    getchar();
    if (choice > 2 || choice < 1) {
        printf("\n\n\tSorry you must enter either 1 or 2! Please try again.");
        choice = 0;
        pauseProgram();
    }
}

// Function userInput
void userInput() {
    title("Calculation Game");
    printf("\n\n\tPlease enter positive numbers only!");
    while (1) {
        printf("\n\n\n\tEnter a number: ");
        scanf("%d", &num1);
        getchar();
        if (num1 > 0)break;
        else {
            printf("\n\tSorry, you must enter a positive value! Please try again!");
            pauseProgram();
            title("Calculation Game");
            printf("\n\n\tPlease enter positive numbers only!");
        }
    }
    while (1) {
        printf("\n\n\tEnter another number: ");
        scanf("%d", &num2);
        getchar();
        if (num2 > 0)break;
        else {
            printf("\n\tSorry, you must enter a positive value! Please try again!");
            pauseProgram();
            title("Calculation Game");
            printf("\n\n\tPlease enter positive numbers only!");
            printf("\n\n\n\tEnter a number: %d\n", num1);
        }
    }
    printf("%d", num1+num2);
    printf("\n\n\n\tWhat is %d + %d? ", num1, num2);
    scanf("%d", &answer);
}

// Function display
void display() {
    title("Calculation Game");
    if (answer == num1 + num2) {
        printf("\n\n\tWow! You got the right answer!");
    } else {
        printf("\n\n\tHmmm...maybe we should review this math concept again!");
    }
    pauseProgram();
    getchar();
}

// Function goodbye
void goodbye() {
    title("Calculation Game");
    printf("\n\n\n\tThis program is written by:\n");
    printf("\tJae Park.\n\n\n");
    printf("\tFor further information call:\n\n");
    printf("\t1-800-123-4567\n\n");
}

// Main Program
int main() {
    intro();
    while (1) {
        mainMenu();
        if (choice == 2) break;
        if (choice == 1) {
            userInput();
            display();
        }
    }
    goodbye();
}


