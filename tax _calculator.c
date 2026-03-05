// create a reliable system that can calculate his income tax based on the Indian tax rules.

/*If  income is ₹2,50,000 or less, no tax should be calculated.
For an income greater than ₹2,50,000 upto ₹5,00,000, the tax is 5% on the amount exceeding ₹2,50,000.
For an income greater than ₹5,00,000 upto ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the amount exceeding ₹5,00,000.
For an income above ₹10,00,000, the tax is: 5% on the first ₹2,50,000 above ₹2,50,000, 20% on the next ₹5,00,000 above ₹5,00,000, 30% on the amount exceeding ₹10,00,000.*/

/*The system should take his annual income as input and output the total tax payable. Additionally, if the input is invalid, the system should display "INVALID".*/



#include <stdio.h>

int main() {

    float income;
    scanf("%f",&income);
    float tax = 0.0 ;
    
    if(income<0)
    {
        printf("INVALID");
        return 0;
    }
    
    if(income <= 250000)
    {
        tax = 0.0;
    }
    
    else if(income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    
    else if(income <=1000000)
    {
        tax =0.05*250000 + (income - 500000) * 0.20;
    }
    
    else
    {
        tax = 0.05*250000 + 0.20*500000 + 0.3*(income-1000000);
    }
    
    printf("%.2f",tax);    
    return 0;
}