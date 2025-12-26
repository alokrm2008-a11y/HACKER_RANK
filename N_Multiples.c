



#include <stdio.h>

int main() {

    int n,x;
    scanf("%d %d", &n, &x);
    
    for(int i = 1; i <= n; i++)
    {
       int multiples = i * x ; 
       printf("%d ",multiples);
    }
    
    return 0;
}