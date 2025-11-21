//Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a ,b;
    scanf("%c %c",&a,&b);
    int res=b-a;
    printf("The distance between %c and %c is %d",a,b,res);
    return 0;
}
