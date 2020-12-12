/*
 * Jae Park
 * 2019-11-13
 * TEJM3M3-01 with Mr. Wong
 * This program takes in a string input and outputs properties about the string length. Ex 5 If structures - Exercise 1.
 */
 
#include <stdio.h>
#include <string.h>

// Declaration Section
char word[21]; // Assume maximum of 20 characters entered
int len, pos;	

// pauses the program until the user enters a key.
void pauseProgram(){
	printf("\nPress Enter key to continue...");
	getchar();
}

// introduction
void intro(){
	printf("See if you can understand strings\n\n");
}

// User input 
void userInput(){
	printf("\nType any word : ");
	gets(word);
	if (strlen(word)<1||strlen(word)>20){	// only takes in input between 1 and 20 inclusively
		printf("Please enter a string between 1 and 20 characters inclusively!");
		pauseProgram();		
		userInput();
	}
}

// processing and output
void display(){
	len = strlen(word);
	
	if (len < 5){
		printf("%s is less than 5 characters long.", word);
	} else{
		if (len%2 != 0){
			pos = len/2+1;
			printf("%s has an odd number of letters. \nThe middle letter is at position %d\n", word, pos);
		}else{
			printf("%s has an even number of letters.", word);
		}
	}
}

main(){
	intro();
	userInput();
	display();
	pauseProgram();
}
