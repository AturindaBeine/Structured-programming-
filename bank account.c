#include <stdio.h>

int main() {
    //trans = amount withdrawn or deposited
    int option, trans;
    double balance;
    balance = 100000;
    
    printf("Check balance: '1'\n Withdraw: '2'\n Deposit: '3'\n");
    scanf("%d", &option);
    
    if(option == 1) {
        trans = 0;
        printf("Your current account balance is UGX %.2f", balance);
    }
    else if(option == 2) {
        printf("Enter amount to be withdrawn: \n");
        scanf("%d", &trans);
        
        if(trans > balance) {
            printf("Insufficient funds. ");
        }
        else if(trans < balance) {
            balance -= trans;
            printf("Your new account balance is UGX %.2f", balance);
        }
    }
    else if(option == 3) {
        printf("Enter amount to be deposited: \n");
        scanf("%d", &trans);
        balance += trans;
        
        printf("Your new account balance is UGX %.2f", balance);
    }

    return 0;
}
