/*Questiom-1 : Write a C compiler to check whether a given number is a valid floating point number or not. Write
for all possible all test cases. Example:
input: 2.0
output: valid
input: 1.
output: invalid*/

//Name : Sangeet Sarkar

//Scholar ID : 2012049

//Department : Computer Science and Engineering

/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
int check(char n[], int size)
{
    int i = 0;
    while (n[i] != '\0')
    {
        if (i == size)
            return 0;
        else if (n[i] == '.')
            return 1;
        i++;
    }
}
int main()
{
    char s[100];
    printf("Enter the number to be checked for float : ");

    scanf("%[^\n]", s);

    int ans = check(s, strlen(s));

    if (ans == 0)
        printf("The entered number is not a floating point number\n");
    else if (ans == 1)
        printf("The entered number is a floating point number.\n");
    return 0;
}