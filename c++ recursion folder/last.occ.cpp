#include<iostream>
#include<vector>
using namespace std;

int lastOccu(vector<int> array , int target, int i){

   if(i == array.size()){
    return -1;
   } 
   
  int idxfound =  lastOccu(array,target,i+1);
  if(idxfound == -1 && array[i] == target){
        return i;
  }
  return idxfound;
}

int main(){

    vector<int> array = {1,2,3,3,3,4};
    cout << lastOccu(array,3,0) << endl;
    return 0;
}