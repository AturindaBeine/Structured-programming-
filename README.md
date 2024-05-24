# Structured-programming-
#include <stdio.h>

int main() {
    // Write C code here
    int choice;
    float celsius, fahrenheit;
    
    printf("1, celsius to fahrenheit\n");
    printf("2, fahrenheit to celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if(choice==1){
        printf("Enter celsius value: ");
        scanf("%f", &celsius);
        fahrenheit=(celsius*9/5)+32;
        printf("fahrenheit value=%f\n", fahrenheit);
    }
    

    return 0;
}
