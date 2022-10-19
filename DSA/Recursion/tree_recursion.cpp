#include <iostream>
using namespace std;
void tree_recursion(int num)
{
    if (num > 0)
    {
        cout << num << endl;
        tree_recursion(num - 1);
        tree_recursion(num - 1);
        cout<<endl;
    }
}
int main()
{
    tree_recursion(10);
    return 0;
}