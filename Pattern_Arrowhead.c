



#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    if(n>=2)
    {    
    for(int i = 1; i <= n-1 ; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i == 1 || j == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n-i+1 ; j++)
        {
            if(j == 1 || j == n-i+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else
    {
        printf("Shape Not Possible");
    }
    
    return 0;
}