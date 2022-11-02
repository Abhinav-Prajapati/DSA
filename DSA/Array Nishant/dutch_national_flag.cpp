/* This problem uses 3 pointers to keep track of 3 unique values 
   ==> low = 0
   ==> Mid = 0
   ==> High = length of array - 1

   Run a while loop untill mid and high cross each other 
      ==> Array is ittrated with Mid as index
      ==> If arr[mid] is 0 swap mid and low increment mid and low by 1
      ==> If arr[mid] is 1 increment mid by 1
      ==> If arr[mid] is 2 swap mid an high , decrement high by 1   
*/
#include <iostream>
using namespace std;

void printArray(int arr[], int len){
    cout << "Printing array elements , Size = "<<len<< endl;
    for (int i = 0; i < len; i++){
        cout << arr[i] << ",";
    }
}

int main(){
    int arr[100]={1,1,0,0,2,0,1,2,2,0};

    int low=0,mid=0,high=10;
    int i=0 ;

    while(mid<=high){
        if(arr[mid]==0) {
           swap(arr[mid],arr[low]);
           low++;
           mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{// If i is 2
            swap(arr[mid],arr[high]);
        
            high--;
        }
        i++;
    }
    printArray(arr,10);
    return 0;
    }