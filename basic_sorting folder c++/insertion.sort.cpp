#include<iostream>
using namespace std;

void print(int array[],int n){
    for(int i = 0 ; i< n ; i++){
        cout << array[i] << " ";
    }
}



void insertionsort(int array[],int n){
    // time complexity O(n^2)
    for(int i = 1 ; i< n ; i++){  
        int current = array[i];
        int prev = i - 1;
        while(prev >= 0 && array[prev] < current ){
            swap(array[prev],array[prev+1]);
            prev--;
        }
        array[prev+1] = current;
    }
    print(array,n);
}

int main(){

    int array[5] = {5,4,1,3,2};
    insertionsort(array,5);
    return 0;
}