/*Steel is graded based on its properties of hardness, carbon content, and tensile strength. The grade is determined by the following conditions:

1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7.
3. Tensile strength must be greater than 5600.
Based on these conditions, the grades are assigned as follows:

10: If all three conditions are met.
9 : If conditions (i) and (ii) are met.
8 : If conditions (ii) and (iii) are met.
7 : If conditions (i) and (iii) are met.
6 : If only one condition is met.
5 : If none of the conditions are met.
Your task is to determine the grade of steel based on the provided values of hardness, carbon content, and tensile strength.

Input Format

Three space-separated values:

h: Hardness of the steel (an integer).
c: Carbon content of the steel (a float).
t: Tensile strength of the steel (an integer).
Constraints

0 ≤ h ≤ 500
0.0 ≤ c ≤ 1.0
0 ≤ t ≤ 50000
Output Format

Print 2 different messages:

One Inlcuding the grade of the steel, "The grade of the steel is: [grade]"
The number of conditions met,
"Only one condition met."
"Two conditions met."
"All of the conditions met."
"None of the conditions met."*/


#include <stdio.h>

int main() {
    
    int h,t,grade;
    float c,cf=0;
    int hf=0,tf=0;
    scanf("%d %f %d", &h, &c, &t);
    
    if(h > 50){
        hf = 1;
    }
    if(c < 0.7){
        cf = 1;
    }
    if(t > 5600){
        tf = 1;
    } 
    
    if(hf==1 && cf==1 && tf==1){
        grade = 10;
    }
    else if(hf==1 && cf==1 && tf==0){
        grade = 9;
    }
    else if(hf==0 && cf==1 && tf==1){
        grade = 8;
    }
    else if(hf==1 && cf==0 && tf==1){
        grade = 7;
    }
    else if(hf==1 || cf==1 || tf==1){
        grade = 6;
    }
    else{
        grade = 5;
    }
    printf("The grade of the steel is: %d\n",grade);
    
    
    
    if(grade==10){
        printf("All of the conditions met.");
    }
    else if(grade==9 || grade == 8 || grade==7){
        printf("Two conditions met.");
    }
    else if(grade==6){
        printf("Only one condition met.");
    }
    else if(grade==5){
        printf("None of the conditions met.");
    }
    
    return 0;
    
}