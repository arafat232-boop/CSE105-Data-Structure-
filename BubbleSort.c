#include <stdio.h>
void display(int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
int bubblesort(int Arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100] = {77, 42, 35, 12, 101, 5};
    int n = 6;

    printf("Before Sorting: ");

    display(arr, n);
    bubblesort(arr, n);

    printf("After Sorting: ");
    display(arr, n);

    return 0;
}