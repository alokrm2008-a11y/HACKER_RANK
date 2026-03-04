/*A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

For units ≤ 100: The rate is ₹5 per unit.
For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
For units > 300: The rate is ₹10 for units above 300.
Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.*/


#include <stdio.h>

int main() {
    int unit;
    float bill = 0.0;
    scanf("%d",&unit);
    
    if(unit < 0)
    {
    printf("Invalid Input!\n");
    return 0;
    }
    
    if(unit <= 100)
    {
        bill = unit * 5.0 ;
    }
    
    else if(unit <= 300)
    {
        bill = (100 * 5.0) + ((unit - 100) * 7.0) ;
    }
    
    else
    {
        bill = (100 * 5.0) + (200 * 7.0) + ((unit - 300) * 10.0);
    }
    
    if(bill <= 1200)
    {
        bill = bill - (bill * 0.1);
    }
    
    printf("The electricity bill is: %.2f.", bill);
        
    return 0;
    
}