// Aim:Program to take 2 decimal numbers and display their addition and multiplication in unary.
// Name:Sangeet Sarkar

#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the value two numbers :-\n");

    scanf("%d %d", &n1, &n2);

    printf("The unaray represenattion is :-\n");

    printf("Addition : ");

    for (int i = 0; i < n1 + n2; i++)
        printf("I");
    printf("\nMultiplication : ");

    for (int i = 0; i < n1 * n2; i++)
        printf("I");
    printf("\n");
    return 0;
}