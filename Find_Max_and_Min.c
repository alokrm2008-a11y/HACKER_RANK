/*Given an array of N integers, your task is to determine the maximum and minimum values in the array.

Input Format

The first line contains an integer N, the number of elements in the array.
The second line contains N space-separated integers A[i], representing the elements of the array.
Constraints

1 ≤ N ≤ 10^5
−10^9 ≤ A[i] ≤ 10^9
Output Format 

Print two space-separated integers: the maximum and minimum values in the array.*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main() {

    int n,max,min;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    max = min = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    
    printf("%d %d",max,min);
    
    return 0;
}
