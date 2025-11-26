/*Here is a simple and correct C program using an if–else-if ladder to check whether a given year is a leap year:*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int year;
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("Leap Year");
    }
    else if (year % 100 == 0) {
        printf("Not Leap Year");
    }
    else if (year % 4 == 0) {
        printf("Leap Year");
    }
    else {
        printf("Not Leap Year");
    }

    return 0;
}
