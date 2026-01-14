/*Write a program to count the number of set bits in the first 4 bits (rightmost bits) of an integer n. Use bitwise operators to solve the problem.

Input Format

A single integer n
Constraints

-2^31 ≤ n ≤ 2^31
Output Format

Output the count of set bits in the first 4 bits of n.*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mask = 15;          
    int bits = n & mask;   
    int count = 0;

    for (int i = 0; i < 4; i++) {
        count = count + (bits & 1);
        bits >>= 1;
    }

    printf("%d", count);
    return 0;
}