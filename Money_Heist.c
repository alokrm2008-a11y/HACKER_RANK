/*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.*/



#include <stdio.h>

int main() {
    
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;
    scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n0);
    
    int index1,rot1,index2,rot2,index3,rot3;
    scanf("%d %d",&index1,&rot1);
    
    if(index1 == 0)
    {
        n1 = (n1 + rot1) % 10;
    }
    else if(index1 == 1)
    {
        n2 = (n2 + rot1) % 10;
    }
    else if(index1 == 2)
    {
        n3 = (n3 + rot1) % 10;
    }
    else if(index1 == 3)
    {
        n4 = (n4 + rot1) % 10;
    }
    else if(index1 == 4)
    {
        n5 = (n5 + rot1) % 10;
    }
    else if(index1 == 5)
    {
        n6 = (n6 + rot1) % 10;
    }
    else if(index1 == 6)
    {
        n7 = (n7 + rot1) % 10;
    }
    else if(index1 == 7)
    {
        n8 = (n8 + rot1) % 10;
    }
    else if(index1 == 8)
    {
        n9 = (n9 + rot1) % 10;
    }
    else if(index1 == 9)
    {
        n0 = (n0 + rot1) % 10;
    }
    
    scanf("%d %d", &index2, &rot2);
    
    if(index2 == 0)
    {
        n1 = (n1 + rot2) % 10;
    }
    else if(index2 == 1)
    {
        n2 = (n2 + rot2) % 10;
    }
     else if(index2 == 2)
    {
        n3 = (n3 + rot2) % 10;
    }
    else if(index2 == 3)
    {
        n4 = (n4 + rot2) % 10;
    }
    else if(index2 == 4)
    {
        n5 = (n5 + rot2) % 10;
    }
    else if(index2 == 5)
    {
        n6 = (n6 + rot2) % 10;
    }
    else if(index2 == 6)
    {
        n7 = (n7 + rot2) % 10;
    }
    else if(index2 == 7)
    {
        n8 = (n8 + rot2) % 10;
    }
    else if(index2 == 8)
    {
        n9 = (n9 + rot2) % 10;
    }
    else if(index2 == 9)
    {
        n0 = (n0 + rot2) % 10;
    }
    
    scanf("%d %d", &index3, &rot3);
    
    if(index3 == 0)
    {
        n1 = (n1 + rot3) % 10;
    }
    else if(index3 == 1)
    {
        n2 = (n2 + rot3) % 10;
    }
    else if(index3 == 2)
    {
        n3 = (n3 + rot3) % 10;
    }
    else if(index3 == 3)
    {
        n4 = (n4 + rot3) % 10;
    }
    else if(index3 == 4)
    {
        n5 = (n5 + rot3) % 10;
    }
    else if(index3 == 5)
    {
        n6 = (n6 + rot3) % 10;
    }
    else if(index3 == 6)
    {
        n7 = (n7 + rot3) % 10;
    }
    else if(index3 == 7)
    {
        n8 = (n8 + rot3) % 10;
    }
    else if(index3 == 8)
    {
        n9 = (n9 + rot3) % 10;
    }
    else if(index3 == 9)
    {
        n0 = (n0 + rot3) % 10;
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9,n0);
    return 0;
}