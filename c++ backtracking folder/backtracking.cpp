#include<iostream>
#include<string>
#include<vector>
using namespace std;


void printarray(int array[], int n){
    for(int i = 0 ; i<n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void changearray(int array[] , int n , int i){
 if(i == n){
    printarray(array,n);
    return;
 }
 array[i] = i+1;

 changearray(array,n , i+1); //backtrack

 array[i] -= 2;

}

int main(){
    int array[50] = {0};
    int n = 5;

    changearray(array,n,0);
    printarray(array,n);

    return 0;
}
