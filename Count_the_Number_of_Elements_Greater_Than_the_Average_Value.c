/*Given an array of integers, calculate the average value of all elements in the array and count how many elements are strictly greater than the average.

The average is defined as: (sum of all elements) / N
Comparison must be strictly greater (>), not greater than or equal to
Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print a single integer — the count of elements strictly greater than the average.*/

/*----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d", &n);
        
    long long sum,count;
    sum = count = 0;
        
    int arr[n];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
      
    double average = (double)sum / n;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > average)
        {
            count++;
        }
    }
    
    printf("%lld",count);
    
    
    return 0;
}
