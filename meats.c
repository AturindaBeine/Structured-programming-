#include<stdio.h>

int main(){
    
    //a one dimension array of 5 types of meat including dog as strings

    char *meats[5] = {"goat", "beef", "dog", "chicken", "pork"};
    
    // a for loop to print the meats in the array and if the meat is dog, print "I hate dog!", break, and else, print "I eat ..."
    for(int x = 0; x < 5; x++) {
        if (meats[x] == "dog"){
            printf("I hate dog!\n");
            break;
        }
        else {
            printf("I eat %s\n", meats[x]);
        }
    } 

    // a for loop to print the meats in the array and if the meat is chicken, print "I love chicken!" and continue
    for(int x = 0; x < 5; x++) {
        if (meats[x] == "chicken") {
            printf("I love chicken!\n");
        }
        else {
            printf("I eat %s\n", meats[x]);
        }
    }

    return 0;

}