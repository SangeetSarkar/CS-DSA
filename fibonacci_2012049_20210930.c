#include <stdio.h>

#define limit 4500
char fibo1[limit];
char fibo2[limit];
char res[limit];

/* Copy Num2 to Num1 */
void copy(char n1[], char n2[])
{
    for (int i = limit - 1; i >= 0; i--)
        n1[i] = n2[i];
}
/* Adding of two string numbers */
void add(char n1[], char n2[], char res[])
{
    int x = 0;
    for (int i = limit - 1; i >= 0; i--)
    {
        int digit = (n1[i] - '0') + (n2[i] - '0') + x;
        res[i] = (digit % 10) + '0';
        x = digit / 10;
    }
}

int main()
{

    for (int i = 0; i < limit; i++)
    {
        fibo1[i] = fibo2[i] = res[i] = '0';
    }
    fibo2[limit - 1] = '1';

    int n;
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("%c", n + '0');
    }
    else
    {
        /* Fibonacci Algorithm */
        for (int i = 2; i <= n; i++)
        {
            add(fibo1, fibo2, res);
            copy(fibo1, fibo2);
            copy(fibo2, res);
        }
        /* Printing Number */
        int start = 0;
        for (int i = 0; i < limit; i++)
        {
            if (start == 0 && res[i] == '0')
                continue;

            if (start == 0 && res[i] != '0')
                start = 1;
            printf("%c", res[i]);
        }
        printf("\n");
    }
    return 0;
}