#include <stdio.h>
#include <string.h>

int main() {

    int month,year;
    scanf("%d %d", &month, &year);
    
    if(year<1 && (month<1 || month>12)){
        printf("Invalid Month\nInvalid Year");
    }
    
    else if(year >= 1)
    {
        if(month >=1 && month <= 12)
        {
            if(month == 2)
            {
                if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                {
                    printf("29");
                }
                else
                {
                    printf("28");
                }
            }
            
            else if(month == 1|| month == 3|| month == 5 || month == 7 || month == 8 || month == 10 || month ==12)
            {
                printf("31");
            }
            else
            {
                printf("30");
            }
        }
        else
        {
            printf("Invalid Month");
        }
        
    }
    else
    {
        printf("Invalid Year");
    }
    
    return 0;
}