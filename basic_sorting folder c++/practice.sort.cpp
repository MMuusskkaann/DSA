#include<iostream>
using namespace std;

void print(char array[],int n){
    for(int i = 0 ; i< n ; i++){
        cout << array[i] << " , ";
    }
}



void sortchar(char array[],int n){
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
    char ch[6] = {'f','b','a','e','c','d'};
    sortchar(ch,6);
    return 0;
}