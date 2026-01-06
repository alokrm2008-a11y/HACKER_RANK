



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    long int diff, sum = 0, product = 1;
    scanf("%d", &n);
    
    for(int i=1; n > 0 ; i++)
    {
        int digit = n % 10;
        sum = sum + digit;
        product = product * digit;
        n = n / 10;
        diff = product - sum;
    }
    
    printf("%ld", diff);
    return 0;
}
