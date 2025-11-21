/*Write a C program that takes a single lowercase English letter as input and prints its corresponding uppercase letter.
Use the ASCII value method to perform the conversion.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a;
    scanf("%c",&a);
    char b = a-32;
    printf("The uppercase of %c is %c",a , b);
        
    return 0;
}
