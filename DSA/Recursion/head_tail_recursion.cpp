/** This is a example of head recrusion

**/
#include <iostream>
using namespace std;

void print_number_tail(int num)
{
    if (num > 0)
    {
        cout << num << endl;
        print_number_tail(num - 1);
    }
}
void print_number_head(int num)
{
    if (num > 0)
    {
        print_number_head(num - 1);
        cout << num << endl;
    }
}


int main()
{
    cout<<"Tail recursion\n";
    print_number_tail(10);

    cout<<"Head recursion\n";
    print_number_head(10);
    return 0;
}