/*You are given two integers a and b.
Your task is to determine whether they share the same last digit.
Bonus Challenge: Try approach of not using modulo operator.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    
    int lastnum1 = num1-(num1/10)*10;
    int lastnum2 = num2-(num2/10)*10;
    
    if(lastnum1 == lastnum2)
    {
        printf("YES");
    }
    else
    {
       printf("NO"); 
    }
    
    return 0;
}
