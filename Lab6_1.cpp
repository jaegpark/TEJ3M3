/*
 * Jae Park
 * 2019-11-22
 * TEJ3M3 with Mr. Wong
 * This program outputs the character array people centered on the screen.
 */
#include <stdio.h>
#include <string.h>
char people [] = "HELLO";

void display(){
    for (int i = 0; i < 13-strlen(people)/2; ++i) {
        printf("\n");
    }
    for(int i = 0; i<strlen(people); i++){
        printf("%55s%c\n"," ", people[i]);
    }
}

int main(){
    display();
    getchar();
}
