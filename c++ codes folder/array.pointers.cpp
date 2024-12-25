#include<iostream>
using namespace std;


// void printarray(int *ptr,int n){

//  for(int i = 0 ; i<n ; i ++){
//     cout << *(ptr + i) << endl;
//     // ptr = ptr+1;
//  }
// }

int main(){
//   int x = 10;
//   int *ptr = &x;

//   int y = 25;
//   ptr = &y;

//   cout << *ptr<<"\n";

//not possible in array

// int array[6];
// cout << array <<"\n";

// int y =25;
// array = &y; //array ka ander read kar sakta ha value overwrite nhi kara sakta

//ARITHMETIC POINTER - 1

// int a = 10;
// int *aptr  = &a;

// cout<< aptr << "\n";

// aptr++; // 1 integer ko add kar dana

// cout << aptr << "\n";

// aptr--;
// cout << aptr <<"\n"; // 1 integer ko minus kar dana

// ARITHMETIC POINTER - 2

// int a = 10;
// int *ptr = &a;


// cout<< ptr <<"\n";
// ptr = ptr+ 3;
// cout<<ptr << "\n";

// ptr = ptr - 3;
// cout << ptr << "\n";

// int array[] = {1,2,3,4,5};
// int n = sizeof(array)/sizeof(int);

// printarray(array,n);

// ADDITION & SUBTRACTION

// int a = 5;
// int *ptr1 = &a;
// int *ptr2 = ptr1 + 3;

// cout<< ptr2<<"\n";
// cout << ptr1 << "\n";

// cout << ptr2 - ptr1 <<"\n";

//array 

int array[20] = {1,2,3,4,5,6,7,8};
int *ptr1 = array;
int *ptr2 = ptr1 +3;

// cout << *ptr2 << "\n";
// cout << *ptr1 << "\n";

cout << (ptr2>ptr1) <<"\n";  // yes:true
cout << (ptr2<ptr1) << "\n"; // no:false
cout << (ptr1==array) << "\n";

    return 0;
}