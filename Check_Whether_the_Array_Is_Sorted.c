/*Given an array of integers, determine whether the array is sorted.

Print "Ascending" if the array is sorted in non-decreasing (ascending) order
Print "Descending" if the array is sorted in non-increasing (descending) order
Print "Not Sorted" otherwise
NOTE: An array with equal adjacent elements is considered sorted - "Ascending"

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print one of the following:

Ascending
Descending
Not Sorted*/


/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,isAscending,isDescending;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
        
    isAscending = isDescending = 1;
    
    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            isAscending =0;
        }
        else if(arr[i] < arr[i+1])
        {
            isDescending = 0;
        }
    }
    
    if(isAscending)
    {
        printf("Ascending");
    }
    else if(isDescending)
    {
        printf("Descending");
    }
    else
    {
        printf("Not Sorted");
    }
     
    return 0;
}
