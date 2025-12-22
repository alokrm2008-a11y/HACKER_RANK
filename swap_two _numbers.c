/*Write a program to swap two numbers.

Input Format

Two unique integers a and b

Constraints

-10^6 <= a <= 10^6
-10^6 <= b <= 10^6
Output Format

Two lines printing the swapped values of a and b*/



#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d",&a,&b);
    
    c = a;
    a = b;
    b = c;
    
    printf("a = %d\nb = %d\n",a,b);
    
    return 0;
}
