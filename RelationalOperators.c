#include <stdio.h>

int main() {
    // Write C code here
    int a = 6, b = 5;
    int abc = a == b; 
    int abd = a != b;
    
    printf("%d == %d is %d\n", a, b, abc);
    printf("%d != %d is %d\n", a, b, abd);
    
    int abe = a > b;
    int abf = a < b;
    
    printf("%d > %d is %d\n", a, b, abe);
    printf("%d < %d is %d\n", a, b, abf);
    
    int abg = abe && abf; // true & false
    int abh = abe || abf; // true or false 
    
    int abi = abe && abe; // true & true
    int abj = abe || abe; // true or true 
    
    int abk = abf && abf; // false & false 
    int abl = abf || abf; // false or false 
    
    printf("%d && %d is %d\n", abe, abf, abg);
    printf("%d || %d is %d\n", abe, abf, abh);
    
    printf("%d && %d is %d\n", abe, abe, abi);
    printf("%d || %d is %d\n", abe, abe, abj);
    
    printf("%d && %d is %d\n", abf, abf, abk);
    printf("%d || %d is %d\n", abf, abf, abl);
    
    
    return 0;
}
