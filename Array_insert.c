#include <stdio.h>

int insert(int A[], int n, int position, int item)
{

    int j = n;
    while (j >= position)
    {
        A[j + 1] = A[j];
        j--;
    }

    A[position] = item;

    return n + 1;
}
int Display(int A[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
int main()
{
    int Arr[10] = {23, 54, 13, 45};
    int n = 4;

    int p = 2;

    printf("Before Insert: ");
    Display(Arr, n);
    insert(Arr, n, p, 11);
    printf("After Insert: ");
    Display(Arr, n + 1);
}