/*Given a 3-digit number ABC, extract and print A, B, and C separately.

Important Instructions

Do NOT write the entire logic in main().
Create a function void split(int n) and call it from main().
Input Format

A single 3-digit integer {ABC}

Constraints

100 ≤ n ≤ 999
Output Format

Single line printing the output as: {A} {B} {C}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n){
    int a,b,c;
    a = n / 100;
    b = (n%100) / 10;
    c = n % 10;
    
    printf("%d %d %d", a, b, c);
}

int main(){
    int num;
    scanf("%d", &num);
    split(num);
    return 0;
}
