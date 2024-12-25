#include<iostream>
#include<cstring>
using namespace std;

// // factorial

// int factorial(int n){

//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

//print numbers in decreasing order
// void print(int n){
//     if(n == 0){
//         return;
//     }
    
//     cout << n <<" ";
//     return print(n-1);
// }


//sum of natural numbers

// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n + sum(n-1);
// }

//fibonacci number

// int fibo(int n ){

//     if(n == 0 || n == 1){
//         return n; // 0,1
//     }
//     return fibo(n-1) + fibo(n-2); 
// }

// array sorted

bool isSorted(int array[], int n , int i ){

    if( i == n-1){
        return true;
    }

     if(array[i] > array[i+1]){
        return false;
     }
     isSorted(array,n,i+1);
}

int main(){
//   int ans = factorial(4);
//   cout << ans << endl;

//printing no indecreasing order

// print(50); 

//sum of n natural number
// cout << sum(6) << endl;

//fibonacci number
// cout << fibo(1) << endl;
// cout << fibo(2) << endl;
// cout << fibo(3) << endl;
// cout << fibo(4) << endl;
// cout << fibo(5) << endl;
// cout << fibo(6) << endl;
// cout << fibo(7) << endl;

//array is sorted
int array1[] = {1,2,3,4,5}; //sorted : 1
int array2[] = {1,2,4,3,5}; // unsorted : 0

cout << isSorted(array1,5,0) << endl;;
cout << isSorted(array2,5,0);

    return 0;
}