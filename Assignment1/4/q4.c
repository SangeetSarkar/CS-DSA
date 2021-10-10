// Question-3 : Write a C program to benchmark the performance of Selection Sort and Bubble Sort. Total input
//items may be randomly generated and already sorted. You have to tell your story using the bar chart.

//Name : Sangeet Sarkar

//Scholar ID : 2012049

//Department : Computer Science and Engineering

/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 10000

void generateRandom(int arr[], int n)
{
    srand(time(0));

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % MAX;
    }
}

void generateSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
}

void copyArr(int arr[], int n, int temp[])
{
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i];
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int input[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (input[j] > input[j + 1])
                swap(&input[j], &input[j + 1]);
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of the input : \n");
    scanf("%d", &n);

    int arr[n];
    int temp[n];

    int choice;
    printf("Enter the type of sorting you want : \n");
    printf("1. Randomly Generated\n");
    printf("2. Already sorted\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        generateRandom(arr, n);

        copyArr(arr, n, temp);

        clock_t bubbleStart = clock();

        bubbleSort(arr, n);

        clock_t bubbleEnd = clock();

        clock_t selectionStart = clock();

        selectionSort(temp, n);

        clock_t selectionEnd = clock();

        printf("Time elapsed for bubble sort : %f\n", (double)(bubbleEnd - bubbleStart) / (double)CLOCKS_PER_SEC);
        printf("Time elapsed for selection sort : %f\n", (double)(selectionEnd - selectionStart) / (double)CLOCKS_PER_SEC);
    }

    else if (choice == 2)
    {
        generateSorted(arr, n);

        copyArr(arr, n, temp);

        clock_t bubbleStart = clock();

        bubbleSort(arr, n);

        clock_t bubbleEnd = clock();

        clock_t selectionStart = clock();

        selectionSort(temp, n);

        clock_t selectionEnd = clock();

        printf("Time elapsed for bubble sort : %f\n", (double)(bubbleEnd - bubbleStart) / (double)CLOCKS_PER_SEC);
        printf("Time elapsed for selection sort : %f\n", (double)(selectionEnd - selectionStart) / (double)CLOCKS_PER_SEC);
    }

    else
        printf("\n Wrong selection!");

    return 0;
}