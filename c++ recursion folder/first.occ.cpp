#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int firstOcc(vector<int> array, int i , int target){

     if( i == array.size()){
        return -1;
     }

     if(array[i] == target){
        return i;
     }

     return firstOcc(array,i+1,target);
}

int main(){
    vector<int> array = {1,2,3,3,3,4,5};
    cout << firstOcc(array,0,30) << endl;
    return 0;
}