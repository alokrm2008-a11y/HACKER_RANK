/*Write a program to print the first n odd numbers, starting from 1, in reverse order. The odd numbers should be printed starting from the largest odd number in the sequence, moving backwards to the smallest odd number.

Input Format

A single integer n
Constraints

0 ≤ n ≤ 1000
Output Format

The single line containing the first n odd numbers, printed in reverse order, separated by spaces and ending with a full-stop(.)*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    if(n==0){
        return 0;
    }
    
    for(int i = (2*n)-1; i > 0; i--)
    {
       if(i % 2 == 1)
       {
           printf("%d", i);
           if(i>1){
               printf(" ");
           }
       }
    }
    printf(".");
    return 0;
}