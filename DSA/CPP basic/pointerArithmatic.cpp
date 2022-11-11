#include <iostream>
using namespace std;

int main()
{

    int arr[3][5] = {{1, 2, 3, 4, 5}, {11, 22, 33, 44, 55}, {111, 222, 333, 444, 555}};
    // cout<<*arr<<endl;
    // cout<<*arr+1;

    for (int i = 0; i < 15; i++)
    {
cout << **(arr + i) << endl;
    }

    return 0;
}
