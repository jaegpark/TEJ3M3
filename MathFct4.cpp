/*
 * Jae Park
 * 2019-11-12
 * TEJM3M3-01 with Mr. Wong
 * This program displays the result of various math operations on two real numbers.
 */

#include <stdio.h>
#include <math.h>
double num1, num2;	// the two numerical inputs

// function title - prints out the title at the top of the output screen.
void title(){
    printf("\n%30sMore Math Functions\n","");
}

// function spacing - takes in two parameters to create a number of blank lines, and then a number of spaces based on those parameters
void spacing(int numOfLines, int numOfSpaces){
    for(int x= 0; x<numOfLines; x++)
        printf("\n");

    for(int x = 0; x<numOfSpaces;x++)
        printf(" ");
}

// function intro - writes the program introduction beneath the title.
void intro(){
    title();
    spacing(0,5);
    printf("This program demonstrates two new Math functions that are very useful!");
}

// function userInput - obtains user input for the two numbers.
void userInput(){
    spacing (3,0);
    printf("Enter a real number:");
    scanf("%lf", &num1);
    spacing(1,0);
    getchar();
    printf("Enter another real number:");
    scanf("%lf", &num2);
    getchar();
}

// function display - displays the result of the math operations on the two numbers.
void display(){
    double answer;
    spacing(4,10);
    answer = round(num1);
    printf("%lf is rounded as %lf\n",num1, answer);
    spacing(1,10);
    answer = sqrt(num1);
    printf("The square root of %lf is %lf\n", num1, answer);
    spacing(1,10);
    answer = pow(num1, num2);
    printf("%lf to the power of %lf is %lf\n", num1, num2, answer);
    spacing (1,10);
    answer = ceil(num1);
    printf("The smallest integer that is not less than %lf is %lf\n", num1, answer);
    spacing (2, 10);
    printf("Press the ENTER key to continue.");
}

// main program
main(){
    intro();
    userInput();
    display();
    getchar();
}
