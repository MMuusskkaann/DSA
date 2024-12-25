#include<iostream>
using namespace std;


void print(int array[],int n ){
    for(int i = 0 ; i < n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}


void bubblesort(int array[],int n){
  bool isSwap = false;   // for if array is sorted
//   cout << "outer loop " << endl;
  for(int i  = 0 ;i<n-1; i++){
        // cout << "inner loop " << endl;
    for(int j = 0 ; j < n-i-1 ; j++){
        if(array[j] > array[j+1]){   //agar descending order ma sort karna ha toh sign change kar dnga
            swap(array[j],array[j+1]);
            // isSwap = true;
        }
        if(!isSwap){
            //array is sorted
            return;
        }
    }
  }
  print(array , n );
}


int main(){
    // int array[5] = {5,4,1,3,2};
    int array[10] = {1,2,3,4,5,6,7,8,9,10};  //array is sorted
    bubblesort(array,10);

    return 0;
}