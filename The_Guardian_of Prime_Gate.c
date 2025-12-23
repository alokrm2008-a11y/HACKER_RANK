#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, n;
    int flag = 0;
    scanf("%d", &n);


    if(n <= 1)
    {
        printf("None");
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) 
        {
            printf("Composite");
            flag = 1;
            break;  
        }
    }
    
    if(flag == 0)
    printf("Prime");

    return 0;
}
