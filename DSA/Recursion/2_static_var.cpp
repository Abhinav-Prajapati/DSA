#include <iostream>
using namespace std;
int static_var(){
    static int num=0;
    num++;
    return num;
}
int main(){
    cout<<static_var()<<endl;
    cout<<static_var()<<endl;
    return 0;
}