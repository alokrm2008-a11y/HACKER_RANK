/*You are given the length and width of a rectangle.
Your task is to calculate and print its area using a separate function, not inside main().*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width) {
    int res=length * width;    
    return res;
}

int main(){
    int l,b;
    scanf("%d %d",&l,&b);
    printf("The area is: %d units",area(l,b));
    return 0;
}
