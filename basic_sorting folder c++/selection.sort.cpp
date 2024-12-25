#include<iostream>
using namespace std;

void print(int array[],int n){
  for(int i = 0 ; i< n ; i++){
    cout << array[i] << "  "; 
  }
}


void selectionsort(int array[],int n){
    // 
  for(int i = 0 ; i<n -1 ; i++){
    int minidx = i;
  for(int j = i + 1 ; j< n ; j++){
    if(array[j] < array[minidx]){  // for descending order change the sign only
        minidx = j;
      }
    }
      swap(array[i],array[minidx]);
   }

   print(array,n);
 }

int main(){
    int array[5] = {5,4,1,3,2};
    selectionsort(array,5);

    return 0;
}