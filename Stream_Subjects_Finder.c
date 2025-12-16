/*A university offers three engineering streams, each represented by a character code:

Code    |   Stream
 C      |    CSE
 E      |    ECE
 M      |    MECHANICAL
Each stream has a fixed curriculum based on the current academic year (1–4).
Additionally, in 4th year, students may choose an internship instead of regular subjects.
You are given three inputs:

a. YEAR — integer in {1, 2, 3, 4} 
b. BRANCH_CODE — character in {C, E, M}
c. If 4th Year: Additional Input: INTERNSHIP_STATUS — integer {0 or 1}
    - 0 → print the regular subjects
    - 1 → print “Enrolled into Internship Program”
Your task is to print the correct set of subjects based on these inputs.

NOTE:

Use only SWITCH statements, if-else statments are NOT allowed.
For checking internship status also - use SWITCH statement only.
Subject Mapping

Year 1: All streams (C/E/M) study Physics, Chemistry, and Maths.

Year 2 - C (CSE): Subjects include C Programming, Computer Organization & Architecture, and Web Development.
Year 2 - E (ECE): Subjects include Signal Processing, Logic Design, and Network Analysis.
Year 2 - M (MECH): Subjects include Thermodynamics, Solid Mechanics, and Heat Transfer.

Year 3 - C (CSE): Object-oriented Programming, DBMS, Data Structures & Algorithms
Year 3 - E (ECE): Analog Electronics, Embedded Systems, Microcontrollers
Year 3 - M (MECH): Applied Mechanics, Kinematics, Mechatronics

Year/Context: Year 4, regular subjects (internship counts as 0 credits).
Streams: C (CSE), E (ECE), and M (MECH) are listed.
Year 4 - C CSE Subjects: Operating Systems, Computer Networks, and Compiler Design.
Year 4 - E ECE Subjects: VLSI Design, Fiber-optic Communication, and Digital Electronics.
Year 4 - M MECH Subjects: Mechanism of Materials (MOM), Strength of Materials (SOM), and Machine Design.

Year: 4
Stream: C / E / M
Output: Enrolled into Internship Program

Input Format

The input format depends on the year.

For Years 1, 2, 3: YEAR and BRANCH_CODE

Example: 2 C
For Year 4: YEAR, BRANCH_CODE and INTERNSHIP_STATUS

Where: INTERNSHIP_STATUS ∈ {0, 1}
0 → print regular subjects
1 → print "Enrolled into Internship Program"
Constraints

YEAR is an integer
BRANCH_CODE is a character
INTERNSHIP_STATUS is an integer
For invalid inputs, print -1.
Output Format

Print subjects one per line.

Note: If YEAR == 4 and INTERNSHIP == 1, print "Enrolled into Internship Program"*/



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int year,intern;
    scanf("%d", &year);
    char branch;
    
    switch(year)
    {
        case 1 : scanf(" %c", &branch);
            switch(branch)
            {
                case 'C' :
                case 'E' :
                case 'M' : printf("Physics\nChemistry\nMaths");
                    break;
            }
            break;
            
        case 2 : scanf(" %c", &branch);
            switch(branch)
            {
                case 'C' : printf("C Programming\nComputer Organization & Architecture\nWeb Development");
                    break;
                case 'E' : printf("Signal Processing\nLogic Design\nNetwork Analysis");
                    break;
                case 'M' : printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                    break;
                default : printf("-1");
            }
        break;
            
        case 3 : scanf(" %c", &branch);
            switch(branch)
            {
                case 'C' : printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                    break;
                case 'E' : printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                    break;
                case 'M' : printf("Applied Mechanics\nKinematics\nMechatronics");
                    break;
                default : printf("-1");
            }
            break;
            
        case 4 : scanf(" %c %d", &branch,&intern);
            switch(intern)
            {
                case 0 :switch(branch)
            { 
                case 'C' : printf("Operating Systems\nComputer Networks\nCompiler Design");
                    break;
                case 'E' : printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
                    break;
                case 'M' : printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design");
                    break;
                default : printf("-1");
            }
            break;
                        
                    case 1 : printf("Enrolled into Internship Program");  
                    break;
                    default : printf("-1");
                }
            break;
            default : printf("-1");
    }
    return 0;
}
