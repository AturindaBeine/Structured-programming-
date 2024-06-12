#include<stdio.h>

int main(){

    int time = 20;

    if(time < 18) {
        printf("Good day.\n");
    }
    else if(time <20) {
        printf("Good evening.\n");
    }
    else {
        printf("Good night.\n");
    }

    // ternary expression
    printf("Ternary Expressions.\n");

    (time = 20) ? printf("Good evening.\n") : printf("Good day.\n");

    (time < 18) ? printf("Good day.\n") : (time <20) ? printf("Good evening.\n") : printf("Good night.\n");
    
    return 0;
}