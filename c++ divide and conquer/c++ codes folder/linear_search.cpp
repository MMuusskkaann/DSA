#include<iostream>
using namespace std;


int linearSearch(int array[],int n ,int key){  // array[] = can be written as *array
    for(int i = 0 ; i<n ; i++){
        if(array[i] == key){
             return i;
        }
    }
   return -1;
}
int main(){

    int array[] = { 2,4,6,8,10,12,14,16};
    int n = sizeof(array)/sizeof(int);

    cout << linearSearch(array,n,10) << endl;
    cout << linearSearch(array,n,20) << endl;
    return 0;
}