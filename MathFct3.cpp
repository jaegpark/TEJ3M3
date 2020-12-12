/*
 * Jae Park
 * 2019-11-13
 * TEJM3M3-01 with Mr. Wong
 * This program converts feet into meters, after taking a real numerical input as the distance in feet. 
 */

#include <stdio.h>
#include <math.h>
double feet;

// function title - prints out the title at the top of the output screen.
void title(){
    printf("\n%30sFeet to Meters Converter\n","");
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
    spacing(0,20);
    printf("This program converts feet into meters!");
}

// function userInput - obtains user input for the number of feet.
void userInput(){
    spacing (3,0);
    printf("Enter the distance in feet:");
    scanf("%lf", &feet);
    getchar();
}

// function display - displays the result of the conversion from feet to meters.
void display(){
    double meters;
    spacing(4,20);
    meters = feet * 0.3048;
    printf("%lf feet is equal to %lf meters.\n",feet, meters);
    spacing (2, 20);
    printf("Press the ENTER key to continue.");
}

// main program
main(){
    intro();
    userInput();
    display();
    getchar();
}
