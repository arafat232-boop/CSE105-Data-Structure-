#include <stdio.h>

void countSort(int array[], int size)
{
    int output[size]; // Output array
    int max = array[0];
    // Find the maximum element in the array
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    int count[max + 1]; // Create count array with size equal to (max + 1)
    // Initialize all elements of count array to 0
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    // Store the count of each element in count array
    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }
    // Update count array to contain cumulative count
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    // Place elements in the sorted order in the output array
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    // Copy sorted elements into original array
    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original Array:\n");
    display(array, size);
    countSort(array, size);
    printf("Sorted Array:\n");
    display(array, size);

    return 0;
}