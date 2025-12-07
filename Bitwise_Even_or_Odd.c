// Write a program to determine whether a given integer N is even or odd using only bitwise operators.

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    if((n & 1) == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}