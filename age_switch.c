#include<stdio.h>

int main(){
    int age;

    printf("Enter your age : ");
    scanf("%d", &age);

    switch (age) {
        case 0 ... 12:
          printf("Child.\n");
          break;
        case 13 ... 19:
          printf("Teen.\n");
          break;
        case 20 ... 30:
          printf("Young adult.\n");
          break;
        case 31 ... 39:
          printf("Adult.\n");
          break;
        case 40 ... 59:
          printf("Middle Age Adult.\n");
          break;
        case 60 ... 100:
          printf("Senior Adult.\n");
          break;
        default:
          printf("Invalid Input.\n");

    }
    return 0;

}