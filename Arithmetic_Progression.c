



#include <stdio.h>

int main() {

    int n,a,d;
    scanf("%d", &n);
    scanf("%d %d", &a, &d);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ",a);
        a = a + d;
    }
    return 0;
}