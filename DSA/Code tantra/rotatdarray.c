#include <stdio.h>

void rotate(int arr[], int from, int to)
{
    for (int i = from; i < to; i++)
    {
        int temp = arr[to - i];
        arr[to - i] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n, k;
    int arr[n];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    rotate(arr, 0, k);
    rotate(arr, k, n);
    rotate(arr, 0, n);

    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", arr[i]);
    }
}
