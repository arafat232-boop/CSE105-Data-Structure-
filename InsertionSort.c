#include <stdio.h>

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

void sorting(int A[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main()
{
    int arr[6] = {32, 7, 28, 17, 67, 90};
    int n = 6;

    printf("Before sorting: ");
    display(arr, n);
    sorting(arr, n);
    printf("After sorting: ");
    display(arr, n);

    return 0;
}