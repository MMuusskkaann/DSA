#include<iostream>
using namespace std;

int main(){
  
//  int marks[5] = {1,2,3,4,5};  // 0 to 49
//  cout << marks[0] << endl; // 1
//  cout << marks[1] << endl; // 2
//  cout << marks[2] << endl; // 3
//  cout << marks[3] << endl; // 4

//               OUTPUT IN ARRAYS

//  cout << "size of array = "<< sizeof(marks) / sizeof(int) << endl;

//  int array[5] = {89,98,78,90,98};  // idx 0,1,2,3,4

//  int n = sizeof(array) / sizeof(int); 
//  for(int idx = 0 ; idx <= n; idx++){
//  cout << array[idx] << " ";
//  }
//  cout << endl;

//       INPUT IN ARRAYS

//  int n;
//  cout << "Enter the size of an array = ";
//  cin >> n;

//  int array[n];
 
//  int n =  sizeof(array)/sizeof(int);

//  for(int i = 0; i<n ; i++){
//     cout << "Enter the values of array  : "<< endl; 
//     cin >> array[i];
//  }
//  for(int i = 0 ; i < n ; i++){
//      cout << array[i] << " ";
//  }
//  cout << endl;

//     ARRAY BY USING POINTERS

// int a = 5;
// int *ptr = &a;

// cout << ptr << endl;

int array[] = {1,2,3,4,5};
int n = sizeof(array)/sizeof(int);

cout << *array << endl;  //array[0]
cout << *(array+1) << endl; //array[1]
cout << *(array+2) << endl; //array[2]
cout << *(array+3) << endl; //array[3]
    return 0;

}