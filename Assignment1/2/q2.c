// Question-2 : Write a C program to check whether a given email is valid or not. Rules of email ID can be refer to
//the link https://en.wikipedia.org/wiki/Email_address

//Name : Sangeet Sarkar

//Scholar ID : 2012049

//Department : Computer Science and Engineering

/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define MAX 50

int isValidDomain(char email[], int flag)
{
    int dot = -1;
    if (email[flag + 1] != '.')
    {

        for (int i = flag + 2; i < MAX - 1; i++)
        {
            if (email[i] == '.')
                dot = i;
        }

        if (dot == -1)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}

int isValidEmail(char email[])
{
    int flag = -1;

    for (int i = 0; i < MAX - 4; i++)
    {
        if (email[i] == '@')
            flag = i;
    }

    if (flag == -1)
        return 0;
    else
        return isValidDomain(email, flag);
}

int main()
{

    char email[MAX] = {0};

    printf("PLease enter the email :- ");

    scanf("%s", email);

    printf("The email is %s\n", ((isValidEmail(email)) ? "valid" : "invalid"));

    return 0;
}