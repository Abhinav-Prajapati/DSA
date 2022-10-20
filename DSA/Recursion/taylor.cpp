#include <iostream>
using namespace std;
double taylor(int x,int num)
{
    static double fact = 1;
    static double pow = 1;
    if (num == 0)
        return 1;
else{

    double t = taylor(x,num-1);
    fact=fact*num;
    pow=pow*x;
    return t+(pow/fact); 
}
}
int main()
{
    cout<<taylor(3,10);
    return 0;
}