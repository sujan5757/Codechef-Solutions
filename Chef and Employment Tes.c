#include <stdio.h>
void quicksort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);
int main(void)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N, K;
        scanf("%d %d", &N, &K);
        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        quicksort(A, 0, N - 1);
        int med;
        med=A[(N+K)/2];
        printf("%d\n",med);
    }
    return 0;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
