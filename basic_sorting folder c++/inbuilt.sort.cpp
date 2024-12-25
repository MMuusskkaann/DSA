#include<iostream>
#include<algorithm>
using namespace std;

void print(int array[],int n){
    for(int i = 0 ; i< n ; i ++){
        cout << array[i] << " ";
    }
}

int main(){
    
    int array[8] = {1,4,1,3,2,4,3,7};
    // sort(array,array+8);
    sort(array,array+8,greater<int>());
    print(array,8);
    return 0;
}