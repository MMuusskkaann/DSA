#include<iostream>
using namespace std;

// void funcInt(){
//     int *ptr = new int;
//     *ptr = 5;

//     cout << *ptr;

//     delete ptr;
// }

// void func(){
//        int *ptr = new int[100];
    
//     int x = 1;
//     for(int i = 0 ; i< 5 ; i++){ 
//         ptr[i] = x;
//         cout << ptr[i] <<" ";
//         x++;

//     }
//     cout << endl; 
//     delete [] ptr; //free
// }


int* func(){
    int *ptr = new int;
    *ptr = 1200;
    cout << " ptr point to " << *ptr << endl;

    return ptr;
    
}
int main(){

   int *x = func();
   cout << *x << endl;

  







    // funcInt();

    // // int array[100] = {1,2,3,4,5,6};  // static memory allocation

    // int size;
    // cin >> size;
    
    // int *arr = new int[size];
    // arr[0] = *(arr+0);
    // arr[1] = *(arr+1);
    // arr[2] = *(arr+2);
    
   
    
    return 0;
}