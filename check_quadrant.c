//Give x-axis and y-axis, and it will tell in which quardrant it will lie ?

#include<stdio.h>
int main(){

    int x,y;
    printf("Enter X-cordinate and Y-Cordinate:");
    scanf("%d %d", &x, &y);

    if(x>0 && y>0)                  
    {
        printf("1st quadrant");
    }

    else if(x>0 && y<0)
    {
        printf("4rth quadrant");
    }

    else if(x<0 && y>0)
    {
        printf("2nd quadrant");
    }

    else if(x<0 && y<0)
    {
        printf("3rd quadrant");
    } 

    else if(x==0)
    {
       if(y>0)
       {
        printf("Y axis");
       }
       else
       {
        printf("-Y axis");
       }
    }

    else if(y==0)
    {
       if(x>0)
       {
        printf("X axis");
       }
       else
       {
        printf("-X axis");
       }
    }

    else
    {
     printf("origin");
    }   


}