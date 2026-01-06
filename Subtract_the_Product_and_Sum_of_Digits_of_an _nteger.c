/*Given an integer n, calculate the product of its digits and the sum of its digits, then print the difference between the product and the sum.

Difference = (Product of digits) − (Sum of digits)
Input Format

A single integer: n

Constraints

1 ≤ 𝑛 ≤ 10^5
1 ≤ n ≤ 10^5
Output Format 

Print a single integer representing: (product of digits of n) − (sum of digits of n)*/


----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    long int diff, sum = 0, product = 1;
    scanf("%d", &n);
    
    for(int i=1; n > 0 ; i++)
    {
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n = n / 10;
        diff = product - sum;
    }
    
    printf("%ld", diff);
    return 0;
}
