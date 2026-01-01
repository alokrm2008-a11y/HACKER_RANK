// Check a person is eligible for vote casting or not.

----------------------------------------------------------------------[Answer]--------------------------------------------------------------------------------------------


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int age;
    printf("Enter your Age: \n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible to cast your vote");
    }
    printf("Thanks you for being a good citizen!");
}
