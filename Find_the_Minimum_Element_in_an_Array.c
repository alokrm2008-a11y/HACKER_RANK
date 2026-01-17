/*Given an array of integers, determine the minimum element present in the array.

Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the minimum element of the array.*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,min;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    for(int i = 1; i < n ;i++)
    {
        if( min > arr[i])
        {
            min = arr[i];
        }
    }
    
    printf("%d",min);
    return 0;
}
