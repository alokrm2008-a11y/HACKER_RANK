/*You are given an integer temperature t.

Classify it as:

Temperature     |       Category
t < 0           |       Freezing
0 ≤ t ≤ 30      |       Normal
t > 30          |       Hot
Input Format

Single integer input: {t}

Constraints

-100 ≤ t ≤ 100
Output Format

You must print: "Freezing" or "Normal" or "Hot"*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int temperature;
    scanf("%d",&temperature);
    
    if(temperature < 0)
    {
        printf("Freezing");
    }
    else if(temperature >= 0 && temperature <= 30)
    {
        printf("Normal");
    }
    else if(temperature > 30)
    {
        printf("Hot");
    }
    
    return 0;
}
