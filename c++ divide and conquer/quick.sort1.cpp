#include<iostream>
#include<vector>
using namespace std;

int search(int array[] , int si ,int ei , int target){

    //Base Case
    if(si > ei){
        return -1;
    }
   int mid = si + (ei-si)/2;

   if(array[mid] == target){
    return mid;
   }

   if(array[si] <= array[mid]){
     if(array[si] <= target && target <= array[mid]){
        //left
        return search(array,si,mid-1,target);
     }
     else{
        return search(array,mid+1,ei,target);
     }
   }

   else{
    //L2
    if(array[mid] <= target && target <= array[ei]){
         return search(array,mid+1,ei,target);       
    }
    else{
        return search(array,si,mid-1,target);        
    }

   }
}
int main(){

    int array[] = {4,5,6,7,0,1,2};
    int n = 7;
    cout << "idx : " << search(array,0,n-1,2) << endl;
    cout << "idx : " << search(array,0,n-1,0) << endl;
    cout << "idx : " << search(array,0,n-1,5) << endl;
    cout << "idx : " << search(array,0,n-1,100) << endl;        
    return 0;
}