#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 2) + fibo(n - 1);
}
int fibo_hashmap(int n, int arr[])
{
    if (arr[n] == -1)
        return n;
    else
    {
        if (arr[n - 2] == -1)
            arr[n - 2] = fibo_hashmap(n - 2, arr);
        if (arr[n - 1] == -1)
            arr[n - 1] = fibo_hashmap(n - 1, arr);
    }
    return arr[n - 2] + arr[n - 1];
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
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -1;
    }
    // cout << fibo(6);
    cout << fibo_hashmap(6, arr);

    return 0;
}