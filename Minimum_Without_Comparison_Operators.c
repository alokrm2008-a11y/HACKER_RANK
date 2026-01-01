/*Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print the smaller of the two integers.*/


----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------



#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int min = b ^ ((a ^ b) & -(a < b));

    printf("%d", min);
    return 0;
}
