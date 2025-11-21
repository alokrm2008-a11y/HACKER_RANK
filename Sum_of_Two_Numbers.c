//Write a program that takes two integers as input and prints their sum.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num1,num2,res;
    scanf("%d",&num1);
    scanf("%d",&num2);
    res=num1+num2;
    printf("The sum of %d and %d is %d.",num1,num2,res);
    
    return 0;
}
