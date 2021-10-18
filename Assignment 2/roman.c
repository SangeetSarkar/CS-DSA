//Aim:Program to take 2 decimal numbers and display their addition and multiplication into Roman numerals
//Name:Sangeet Sarkar

#include <stdio.h>

char *decimalToRoman(int n)
{
    char *add = (char *)malloc(100 * sizeof(char));
    int counter = 0;

    while (n != 0)
    {
        if (n >= 1000)
        {
            if (n >= 1500 && n < 1600)
            {
                add[counter] = 'M';
                add[counter + 1] = 'D';
                counter += 2;
                counter += 2;
            }
            else if (n >= 1100 && n < 1200)
            {
                add[counter] = 'M';
                add[counter + 1] = 'C';
                counter += 2;
            }
            else
            {
                for (int i = 0; i < n / 1000; i++)
                {
                    add[counter] = 'M';
                    counter++;
                }
                n %= 1000;
            }
        }

        else if (n < 1000 && n >= 500)
        {
            if (n >= 900)
            {
                add[counter] = 'C';
                add[counter + 1] = 'M';
                counter += 2;
                n %= 100;
            }
            else if (n >= 600 && n <= 700)
            {
                add[counter] = 'D';
                add[counter + 1] = 'C';
                counter += 2;
                n %= 100;
            }
            else
            {
                add[counter] = 'D';
                counter++;
                for (int i = 0; i < (n - 500) / 100; i++)
                {
                    add[counter] = 'C';
                    counter++;
                }

                n %= 100;
            }
        }
        else if (n >= 100 && n < 500)
        {
            if (n >= 400 && n < 500)
            {
                add[counter] = 'C';
                add[counter + 1] = 'D';
                counter += 2;
                n %= 100;
            }
            else
            {

                for (int i = 0; i < n / 100; i++)
                {
                    add[counter] = 'C';
                    counter++;
                }
                n %= 100;
            }
        }
        else if (n < 100 && n >= 50)
        {
            if (n >= 90)
            {
                add[counter] = 'X';
                add[counter + 1] = 'C';
                counter += 2;
                n %= 10;
            }
            else if (n < 70 && n >= 60)
            {
                add[counter] = 'L';
                add[counter + 1] = 'X';
                counter += 2;
                n %= 10;
            }
            else
            {
                add[counter] = 'L';
                counter++;
                for (int i = 0; i < (n - 50) / 10; i++)
                {
                    add[counter] = 'X';
                    counter++;
                }
                n %= 10;
            }
        }
        else if (n < 50 && n >= 10)
        {
            if (n >= 40)
            {
                add[counter] = 'X';
                add[counter + 1] = 'L';
                counter += 2;
            }
            else
            {
                for (int i = 0; i < n / 10; i++)
                {
                    add[counter] = 'X';
                    counter++;
                }
                n %= 10;
            }
        }
        else if (n >= 5 && n < 10)
        {
            if (n >= 9)
            {
                add[counter] = 'I';
                add[counter + 1] = 'X';
                counter += 2;
                n %= 1;
            }
            else
            {
                add[counter] = 'V';
                counter++;
                for (int i = 0; i < n - 5; i++)
                {
                    add[counter] = 'I';
                    counter++;
                }
                n %= 1;
            }
        }
        else if (n >= 1 && n < 5)
        {
            if (n >= 4)
            {
                add[counter] = 'I';
                add[counter + 1] = 'V';
                counter += 2;
                n %= 1;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    add[counter] = 'I';
                    counter++;
                }
                n %= 1;
            }
        }
    }
    return add;
}

int main()
{
    int n1, n2;

    printf("Enter the two numbers :-\n");
    scanf("%d %d", &n1, &n2);

    int sum = n1 + n2;
    int product = n1 * n2;

    printf("The result of summation in roman numerals is :");
    char *addPointer = decimalToRoman(sum);
    printf("\n %s \n", addPointer);
    free(addPointer);

    printf("The result of product in roman numerals is :");
    char *prodPointer = decimalToRoman(product);
    printf("\n %s \n", prodPointer);
    free(prodPointer);

    return 0;
}