// This question is incomplete
#include <iostream>
using namespace std;
void print_spiral(int arr[][3], int top, int bottom, int left, int right)
{
    while (top <= bottom && left <= right)
    {
        for (int i = left; i < right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i < bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        for (int i = right; i > left; i--)
        {
            cout << arr[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i > top; i--)
        {
            cout << arr[i][left] << " ";
        }
        left++;
    }
}
int main()
{
    int arr[4][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    print_spiral(arr, 0, 2, 0, 3);

    return 0;
}