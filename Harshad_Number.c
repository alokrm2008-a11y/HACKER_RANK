


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,t,sum=0;
    scanf("%d", &n);
    
    for(t = n; t > 0; t = t / 10)
    {
        sum = sum + (t % 10);
    }
    
    if((n % sum) == 0)
    {
        printf("%d is a harshad number",n);
    }
    else
    {
         printf("%d is not a harshad number",n);
    }
    
    return 0;
}
