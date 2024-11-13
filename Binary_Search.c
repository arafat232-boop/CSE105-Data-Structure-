/*Binary search is suitable if the array is sorted*/

#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int search(int arr[], int n, int data)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = ((l + r) / 2);
        if (data == arr[mid])
            return mid;
        else if (data > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{

    int Arr[100] = {12, 13, 14, 15, 16, 17, 18};
    int n = 7;

    display(Arr, n);
    int index = search(Arr, n, 16);

    if (index >= 0)

        printf("Item is found at index: %d\n", index);

    else
        printf("Intem is not found");

    return 0;
}