/*Given a 3-digit number ABC, extract and print A, B, and C separately.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n){
    int a,b,c;
    a = n / 100;
    b = (n%100) / 10;
    c = n % 10;
    
    printf("%d %d %d", a, b, c);
}

int main(){
    int num;
    scanf("%d", &num);
    split(num);
    return 0;
}