/*Given two integers, extract their last digits and print the sum of those digits.

Important Instructions

Do NOT write the entire logic in main().
Write a function int sumLastDigits(int a, int b) and call it from main().
Input Format

Two integers: {a} {b}

Constraints

0 ≤ a, b ≤ 10⁹
Output Format

Single line printing the result as: The sum of last digits is: {res}*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b) {
    int res=(a % 10)+(b%10);
    return res;
}

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("The sum of last digits is: %d",sumLastDigits(num1,num2));
    return 0;
}
