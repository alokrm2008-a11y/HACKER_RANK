/*Given an array of integers, determine the second smallest distinct element in the array.

The second smallest element is defined as the element that is strictly greater than the smallest element and smaller than all other remaining elements.
If the array does not contain at least two distinct elements, print -1.
Note: Adjacent elements may be the same.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the second smallest distinct element in the array.
If no such element exists, print -1.*/


/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, min2=0;
    int found = 0;
    
    
    min = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > min) 
        {
            if (!found)
            {
                min2 = arr[i];
                found = 1;
            } 
            else if (arr[i] < min2)
            {
                min2 = arr[i];
            }
        }
    }

    if (!found) 
    {
        printf("-1");
    } 
    else 
    {
        printf("%d", min2);
    }

    return 0;
}