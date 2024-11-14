#include <stdio.h>

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void selectionsort(int A[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
                min = j;
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
    }
}

int main()
{
    int arr[5] = {7, 2, 8, 5, 4};
    int n = 5;

    printf("Before sorting: ");
    display(arr, n);
    selectionsort(arr, n);
    printf("After sorting: ");
    display(arr, n);

    return 0;
}