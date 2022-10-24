#include <iostream>
using namespace std;
int ncr_pascle(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return ncr_pascle(n - 1, r - 1) + ncr_pascle(n - 1, r);
}
int main()
{
    cout<<ncr_pascle(9,9);
    return 0;
}