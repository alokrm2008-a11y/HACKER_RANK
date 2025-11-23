/*Some C data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num1;
    long num2;
    char ch;
    float num3;
    double num4;
    
    scanf("%d %ld %c %f %lf", &num1, &num2, &ch, &num3, &num4);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", num1, num2, ch, num3, num4);
    
    return 0;
  
}
