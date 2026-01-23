/*Given an array of integers and a target value K, determine the index of the last occurrence of K in the array.

Indexing is 0-based
If the element does not exist in the array, print -1
Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Third line: An integer K, the element to search for
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i], K ≤ 10⁹
Output Format

Print a single integer — the 0-based index of the last occurrence of K.
If K is not present, print -1.*/


/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k, lastindex = -1;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            lastindex = i;
        }
    }
    
    printf("%d", lastindex);
    
    return 0;
}
