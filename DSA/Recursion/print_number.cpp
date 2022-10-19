#include <iostream>
using namespace std;

int print_num(int num){
    if(num<0){
        return 0;
    }
    print_num(num-1);
    cout<<num<<endl;
}


int main(){
    print_num(10);
    return 0;
}