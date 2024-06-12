#include<stdio.h>

int main() {
    int year;

    printf("Enter year of birth : ");
    scanf("%d", &year);

    switch(year) {
        case 1928 ... 1945:
          printf("Silennt Generation.\n");
          break;
        case 1946 ... 1964:
          printf("Baby Boomers.\n");
          break;
        case 1965 ... 1980:
          printf("Generation X.\n");
          break;
        case 1981 ... 1996:
          printf("Millennials.\n");
          break;
        case 1997 ... 2012:
          printf("Generation Z.\n");
          break;
        case 2013 ... 2024:
          printf("Alpha Generation.\n");
          break;
        default:
          printf("Invalid Input.\n");
    }

    return 0;

}