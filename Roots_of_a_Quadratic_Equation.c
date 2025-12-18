/*Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.

Formula

 (\(x=\frac{-b\pm \sqrt{b^{2}-4ac}}{2a}\))

where the discriminant D = b^2 − 4ac determines the type of roots:

If D>0, print "Real and Distinct"
If D=0, print "Real and Equal"
If D<0, print "Complex"
Note: You may use the sqrt() function from math.h to compute square roots.

Input Format

A single line containing three space-separated integers: a b c
Constraints

−1000 ≤ a, b, c ≤ 1000
a ≠ 0
Output Format

If the roots are real, print:

Roots: [root1], [root2]
Type: [TYPE]
where,

root1 and root2 are the real roots rounded to 2 decimal places
TYPE is either "Real and Distinct" or "Real and Equal".
If the roots are complex, print:

Roots: [real_part] + [imaginary_part]i, [real_part] - [imaginary_part]i
Type: Complex
where,

real_part is the real part of the root (rounded to 2 decimal places).
imaginary_part is the imaginary part (rounded to 2 decimal places).*/



#include <stdio.h>
#include <math.h>

int main() {

    int a,b,c;
    float D,root1,root2,real,img;
    scanf("%d %d %d", &a, &b, &c);
    
    D = (b*b) - (4.0*a*c) ;
    
    if(D >= 0)
    { 
      
        root1 = (-b + sqrt(D) )/(2.0*a) + +0.00  ;
        root2 = (-b - sqrt(D) )/(2.0*a) + +0.00 ;
        if(D>0){
        printf("Roots: %.2f, %.2f\nType: Real and Distinct", root1, root2) ; }
        else{
        printf("Roots: %.2f, %.2f\nType: Real and Equal", root1, root2) ;    
        }    
    }
    else
    {
        real = -b/(2.0 * a);
        img = sqrt(fabs(D)) / (2.0 * a);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\nType: Complex", real, img, real, img);
    }
        
    return 0;
}