/*Given an integer n, write a program to calculate the n-th prime number, starting from 1.

Input Format

A single integer 𝑛.
Constraints

1 <= n <=104
Output Format

Print the n-th prime number.*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    
    int i,n;
    scanf("%d",&n);
    
    int count=1;

    for(i = 2;count <= n ; i++)
    {
        int prime=1;
        for(int j = 2; j*j <= i; j++)
        {
            if(i % j == 0)
            {
                prime = 0;
                break;
            }
        } 
        if(prime)
        {
             count++ ;
        }
            
    } 
    printf("%d",i-1);
    
    return 0;
}