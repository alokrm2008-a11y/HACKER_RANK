/*Given an array of integers, compute the sum of all elements present in the array.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the sum of all elements in the array.*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    long long sum = 0;
    scanf("%d",&n);
    int arr[n];
    
    
    for(i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
        sum = sum + arr[i];
    }
    

    printf("%lld",sum);
    return 0;
}
