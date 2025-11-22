/*Write a program that takes an integer as input and print its half value as a floating-point number with 2 decimals.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    float halfvalue =(float)num / 2;
    printf("Half of %d is %.2f",num,halfvalue);
       
    return 0;
}
