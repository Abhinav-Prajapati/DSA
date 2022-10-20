#include <iostream>
using namespace std;
int factorial(int num)
{
    if (num == 0)
        return 1;
    return factorial(num-1)*num;
}
int main()
{
    cout<<factorial(10);
    return 0;
}