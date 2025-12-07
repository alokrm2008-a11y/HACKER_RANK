//Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.

#include <stdio.h>

int main() {

    int n,i,res;
    scanf("%d %d", &n, &i);
    
    res = n | (1 << i);
    printf("%d",res);
       
    return 0;
}