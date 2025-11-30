// Checked the given is Even or odd.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Enter the number: 2");
    scanf("d",&num);
    
    if(num%2==0)
    {
        printf("The given number is Even");
    }
    else
    {
        printf("The given number is Odd");
    }
}