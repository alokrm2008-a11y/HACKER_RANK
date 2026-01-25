/*Given an array of integers, replace every negative number in the array with 0 and print the updated array.

The relative order of elements must remain unchanged.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the updated array after replacing all negative numbers with 0.
Elements must be printed in a single line, space-separated.*/


/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 0;
        }
    }
    
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
