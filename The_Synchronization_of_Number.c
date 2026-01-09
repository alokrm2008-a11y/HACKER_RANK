/*On a number line starting from 1, two points begin moving forward.

The first point jumps forward by A units at a time.
The second point jumps forward by B units at a time.
Both points can only land on numbers that are multiples of their jump length.

The mathematician observing the number line wants to know:

At what smallest positive number will both points land together for the first time?
Task:

Given two natural numbers A and B, determine the smallest positive integer that is a multiple of both numbers.

Input Format

A single line containing two space-separated natural numbers A and B.

Constraints

1 ≤ A, B ≤ 10^9

Output Format

Print a single integer — the first common landing point of both sequences i.e. LCM.*/


----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,gcd=0,lcm=0;
    scanf("%d %d", &a, &b);
    
    for(int i = 1; i <= a && i <= b ;i++)
    {
        if(a % i == 0 && b % i ==0)
        {
            gcd = i;
        }
    }
    
    lcm = (a/gcd)*b;
    
    printf("%d",lcm);
    
    return 0;
}
