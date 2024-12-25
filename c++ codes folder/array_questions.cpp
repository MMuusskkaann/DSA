#include<iostream>
using namespace std;

int main(){
 // FIND THE MAXIMUM AND MINIMUM VALUES THROUGH ARRAY

 int array[] = {5,4,3,9,12};
 int n = sizeof(array) / sizeof(int);
 int max = array[0];
 int min = array[0];

 for(int i = 0 ; i<n ; i ++){
  if(array[i] > max){
     max = array[i];
     cout << "assigning value " << array[i] << " to max\n";

  }
  if(array[i] < min){
    min = array[i];
   }
 }

 cout << "max = " << max << endl;
 cout << "min = " << min << endl;

    return 0;
}
