// A shop offers a discount on an item based on a percentage.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float discount(float price, float percent){
    
    float discountAmount = (price*percent) / 100;
    float discountPrice = price - discountAmount;
    return discountPrice;
    
}

int main(){
    
    float price,percent;
    scanf("%f %f",&price,&percent);
    float res = discount(price,percent);
    printf("The final price is: %f",res);
    return 0;
    
    
}
 