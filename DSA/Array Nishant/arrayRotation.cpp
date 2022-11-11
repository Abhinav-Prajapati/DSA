#include <iostream>
using namespace std;

void printArray(int arr[], int len)
{
    cout << "Printing array elements , Size = " << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ",";
    }
}
void reverse_1D_arr(int *arr, int start, int end)
{
    while (end > start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int len, k;
    cin >> len >> k;

    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    reverse_1D_arr(arr, 0, len - 1);
    reverse_1D_arr(arr, 0, k - 1);
    reverse_1D_arr(arr, k, len - 1);

    printArray(arr, len);
    return 0;
}