#include <stdio.h>

void matrix(int A[3][3], int B[3][3], int C[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[3][3] = {6, 8, 9,
                   2, 4, 6,
                   6, 7, 8};
    int B[3][3] = {1, 2, 3,
                   4, 5, 6,
                   7, 8, 9};
    int C[3][3];

    matrix(A, B, C);

    return 0;
}