//Write a program to calculate the late fee for  payment.

#include<stdio.h>

int main(){
    float amount;
    int daylate;

    printf("Enter the Amount to Pay:");
    scanf("%f",&amount);

    printf("Enter the number the days which payment is Delayed:");
    scanf("%d",&daylate);
    
    if(daylate > 0)
    {
        amount = amount + daylate * 150 ;

    }
    printf("Final amount to be paid: %f", amount);
}