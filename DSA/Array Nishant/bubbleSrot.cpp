#include <iostream>
using namespace std;
void bubbleSrot(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - i - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                swap(arr[k], arr[k + 1]);
            }
        }
    }
}
void printArray(int arr[], int len)
{
    cout << "Printing array elements , Size = " << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{
    int arr[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSrot(arr, 9);
    printArray(arr, 9);

    return 0;
}