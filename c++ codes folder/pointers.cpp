#include<iostream>
using namespace std;


// CALL BY REFRENCE
//  void changeA(int a){
//     a = 20;
//     cout << a << endl;
//  }

 //PASSED BY REFRENCE USING POINTERS

//  void changeA(int *ptr){
//     *ptr = 20;
//     cout << *ptr << endl;
//  }

  //PASSED BY REFRENCE VARIABLE

//  void changeA(int &param){
//      param = 20;
//     cout << param << endl;
//  }
 int main(){ 

    // int a  = 10;
    // int *ptr = &a;
    // int **pptr = &ptr;
    
    // float pi = 3.14;
    // float *ptr2 =  &pi;

    // cout << &a << " = " << sizeof(ptr)<< "\n";
    // cout << &pi << " = " << sizeof(ptr2) << "\n"; 
    // cout << &ptr << " = " << pptr << "\n";

    // int a = 10;
    // int *ptr = &a;

    // // cout << &a << "\n";
    // // cout << *(&a) << endl;

    // cout << ptr << endl;
    // cout << *ptr << endl;

    // *ptr = 90;
    // cout << a << endl;
    // int *ptr = NULL;

    // cout<< ptr << endl;
    // cout << *ptr << endl;  //segmentation fault

    // cout <<  "bye"<<"\n";  // can't print due to segmentation fault

    
    // int a = 10;
    // changeA(&a);

    // cout << a <<endl;

    //PASS BY REFRENCE VARIABLE
    // int a= 10;
    // // int &b = a;
    // // cout << b << endl;
    // // cout << a << endl;
 
    // changeA(a);
    // cout << a << endl;

    return 0;
 }