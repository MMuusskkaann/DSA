#include<iostream>
#include<vector>
#include<string>
using namespace std;



void heapify(int i, vector<int> &array,int n){
    int left = 2*i+1;
    int right = 2*i+2; 
    
    int maxIdx = i;
    if(left < n && array[left] > array[maxIdx]){
    maxIdx = left;
    }

    if(right < n && array[right] > array[maxIdx]){
        maxIdx = right;
    }

    if(maxIdx != i){
       swap(array[i],array[maxIdx]);
       heapify(maxIdx,array,n);
    }
}

void heapSort(vector<int> &array){
    int n = array.size();
    

    //step1 : build the maxheap
    for(int i = n/2 ; i>= 0 ; i--){  //O(n*logn)
        heapify(i,array,n);  
    }

    //step2 : fix the heap

    for(int i = n-1 ; i>= 0 ; i--){ //O(n*logn )
        swap(array[0],array[i]);
        heapify(0,array,i);
    }
}

int main(){

    vector<int> array = {1, 4, 2, 5, 3};
    heapSort(array);

    for(int i = 0 ; i<array.size();i++){
        cout<<array[i] << " ";
    }
    return 0;
}