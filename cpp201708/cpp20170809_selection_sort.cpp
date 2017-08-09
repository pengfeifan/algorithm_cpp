//selection sort
#include <stdio.h>

int selectionSort(int A[], int N)
{
    int i, j, count = 0, minIndex;
    for (i = 0; i < N - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < N; j++)
        {
            if (A[j] < A[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
        {
            int temp = A[i];
            A[i] = A[minIndex];
            A[minIndex] = temp;
            ++count;
        }
    }
    return count;
}

int main()
{
    int A[100], N, i, swaps;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    swaps = selectionSort(A, N);
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("swaps:%d\n", swaps);
    return 0;
}
