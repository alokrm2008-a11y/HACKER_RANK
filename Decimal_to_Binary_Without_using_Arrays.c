/*Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros). [Without using Arrays]

Input Format

A single integer N
Constraints

0 ≤ N ≤ 1023
Output Format

A single integer number representing the binary equivalent of N, with a message, "Binary equivalent of [N]: [binaryForm]"*/


/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/


#include <stdio.h>

int main() {

    int n,temp, bits = 0;

    scanf("%d", &n);
    
    if(n == 0)
    {
        printf("Binary equivalent of %d: 0",n);
        return 0;
    }
    

    for(temp = n; temp > 0; temp /= 2)
    {
        bits++;
    }
    
    printf("Binary equivalent of %d: ", n);
    
    for (int i = bits - 1; i >= 0; i--)
    {
        int binary = (n >> i) & 1;
        printf("%d", binary);
    }
    
    return 0;
}