#include <iostream>
using namespace std;

int sum(int num)
{
    if (num > 0)
    {
        return sum(num - 1) + num;
    }
}
int main()
{
    cout<<sum(10);
    return 0;
}
// om patel