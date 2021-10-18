#include <stdio.h>
#include <math.h>
long long int decimalToBinary(int n)
{
    int i = 0;
    long long int sum = 0;
    while (n != 0)
    {
        sum += (n % 2) * pow(10, i);
        n /= 2;
        i++;
    }
    return sum;
}
int main()
{
    int n1, n2;

    printf("Enter the value two numbers :-\n");

    scanf("%d %d", &n1, &n2);

    printf("The deicmal represenattion is :-\n");

    printf("Addition : ");

    printf("%lld", decimalToBinary(n1 + n2));

    printf("\nMultiplication : ");

    printf("%lld\n", decimalToBinary(n1 * n2));

    return 0;
}