//Check the given number is positive or negative.

#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("The given number isn positive");
    }
    else
    {
        printf("The given number is negative");
    }
}