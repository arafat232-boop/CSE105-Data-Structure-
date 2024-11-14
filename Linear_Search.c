#include <stdio.h>

void display(int Arr[], int n)
{

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", Arr[i]);
    }

    printf("\n");
}

int search(int Arr[], int n, int item)
{

    int i = 0;
    while (i < n)
    {
        if (Arr[i] == item)
            return i;
        i++;
    }

    return -1;
}

int main()
{
    int A[100] = {15, 5, 20, 35, 2, 42, 67, 17};
    int n = 7;
    int item = 20;

    printf("Items are: ");
    display(A, n);

    if (search(A, n, item) >= 0)
        printf("Item is found\n");
    else
        printf("Item is not found\n");

    return 0;
}