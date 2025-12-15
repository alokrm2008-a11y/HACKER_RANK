/*Write a program to swap two integers using only the bitwise XOR operator without using a temporary variable.

The program should take two integers, A and B, as input and output the swapped values.

Input Format

The first line contains an integer A
The second line contains an integer B
Constraints

(-10^5 ≤ A ≤ 10^5)
(-10^5 ≤ B ≤ 10^5)
Output Format

The first line contains the swapped value of A.
The second line contains the swapped value of B.*/


#include <stdio.h>

int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("%d\n%d",a,b);
    return 0;
}