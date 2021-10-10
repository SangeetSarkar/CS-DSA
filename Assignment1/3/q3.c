/* Question-2 : Let us assume that A is a single dimensional array. You have given A array to construct a two-
dimensional array. Write a C program to convert explicitly from 2D array to 1D array. Example,

Map(A, i, j) gives you A[i][j]. You can use either row-major order or column-major order. */

//Name : Sangeet Sarkar

//Scholar ID : 2012049

//Department : Computer Science and Engineering

/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int map(int oneD[], int i, int j, int n)
{
    return oneD[i * n + j];
}

int main()
{
    int m, n;
    printf("Enter the dimensions of the 2-D array : (m*n) ");
    scanf("%d %d", &m, &n);

    int oneD[m * n];
    int twoD[m][n];

    printf("Enter the elements of 1-D array : \n");

    for (int i = 0; i < m * n; i++)
        scanf("%d", &oneD[i]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            twoD[i][j] = map(oneD, i, j, n);
        }

    printf("THe required 2-D array is : \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", twoD[i][j]);
        }
        printf("\n");
    }
    return 0;
}