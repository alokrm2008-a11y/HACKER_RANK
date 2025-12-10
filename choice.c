// C Program for Addition, Subtraction, Multiplication & Division


#include <stdio.h>

int main() {
    int num1, num2, result;
    int choice;

    
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int flag = 1;


    if (choice == 1)
    {
        result = num1 + num2;
    }
    else if (choice == 2)
    {
        result = num1 - num2;
    }
    else if (choice == 3)
    {
        result = num1 * num2;
    }
    else if (choice == 4)
    {
        result = num1 / num2;
    }
    else
    {
        printf("Invalid choice. Please select a valid option.\n");
        flag = 0;
    }
    
    
    if(flag == 1)
    {
        printf("Result: %d\n", result);
    }
        

    return 0;
}