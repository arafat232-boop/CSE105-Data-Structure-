#include <stdio.h>

void Display(int A[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}

int delete(int A[], int position, int n)
{
    int j = position;
    while (j <= n)
    {
        A[j] = A[j + 1];
        j = j + 1;
    }
}

int main()
{
    int Arr[100] = {12, 21, 10, 54, 34, 32};
    int n = 6;
    int p = 4;

    printf("Before Delete: ");
    Display(Arr, n);
    delete (Arr, p, n);
    printf("After Delete: ");
    Display(Arr, n - 1);
    return 0;
}