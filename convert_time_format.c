/*You are given two integers h and m, representing time in 24-hour format
Your task is to convert this time into 12-hour format and print the result in the form:*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int hrs,min;
    scanf("%d %d",&hrs,&min);
    
    if(hrs==0){
        if(min<10){
            printf("12:0%d AM", min);
        }
        else{
            printf("12:%d AM", min);
        }
    }
    
    else if(hrs<12){
        if(min<10){
            printf("%d:0%d AM",hrs, min);
        }
        else{
            printf("%d:%d AM",hrs, min);
        }
    }
    
    else if(hrs==12){
        if(min<10){
            printf("12:0%d PM",min);
        }
        else{
            printf("12:%d PM",min);
        }
    }
    
    else if(hrs<24){
        if(min<10){
            printf("%d:0%d PM",hrs-12,min);
        }
        else{
            printf("%d:%d PM",hrs-12,min);
        }
    }
    
}
