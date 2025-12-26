


#include <stdio.h>

int main() {

    int n, count = 0;
    scanf("%d",&n);
    
    for(int i=1 ;count < n ; i++)
    {
        if((i*i) % 3 != 0)
        {
            printf("%d ", i*i);
            count++ ;
        }
    }
        
    return 0;
}