#include<iostream>
using namespace std;

// using with extra space
void printArray(int array[] , int n){
    for(int i = 0 ; i < n ;i++){
        cout << array[i] <<",";
    }
    cout << endl;
}
int main(){

// with using extra space

    // int array[] = {5,4,3,9,2};
    // int n = sizeof(array)/sizeof(int);
    
    // int Copyarray[n];
    // for(int i = 0; i <n ; i++){
    //     int j = n - i-1;
    //     Copyarray[i] = array[j];
    // }

    // for(int i = 0 ; i<n ; i++){
    //     array[i] = Copyarray[i];
    // }
    // printArray(array,n);

    // without using extra space

    int array[] = {5,4,3,9,2};
    int n = sizeof(array)/sizeof(int);
    
    int start = 0,end=n-1;

    while(start < end){
        //swap
        // int temp;
        // temp = array[start];
        // array[start] = array[end];
        // array[end] = temp;

        swap(array[start],array[end]);

        start++;
        end--;
    }
    printArray(array,n);
    return 0;
}