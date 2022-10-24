#include <iostream>
using namespace std;

void toh(int disc_number, char from, char buffer, char to)
{
    if (disc_number == 1)
    {
        cout << from << " to " << to << endl;
    }
    else
    {
        toh(disc_number - 1, from, to, buffer);

        cout << from << " to " << to << endl;

        toh(disc_number - 1, buffer, from, to);
    }
}
int main()
{

    toh(2, 'a', 'b', 'c');
    return 0;
}