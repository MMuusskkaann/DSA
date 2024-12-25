#include<iostream>
#include<vector>
using namespace std;


void merge(int array[], int si,int mid, int ei){
     vector<int> temp;
     int i = si;
     int j = mid+1;

     while(i<=mid && j <= ei){
        if(array[i] <= array[j]){
            temp.push_back(array[i++]);
        }

        else{
            temp.push_back(array[j++]);
        }
     }

     while(i <= mid){
        temp.push_back(array[i++]);
     }

     while(j <= ei){
        temp.push_back(array[j++]);
     }

     //vector -> original array

     for(int idx = si,x = 0 ; idx<= ei ; idx++){ //original array
       array[idx] = temp[x++];
     }

}

void mergeSort(int array[],int si , int ei){ //O(nlogn)

   if(si >= ei){
    return;
   }

   int mid = (si+ei)/2; // or si + (ei - si)/2


   mergeSort(array,si,mid);//left half
   mergeSort(array,mid+1,ei);//right half
   
   merge(array,si,mid,ei); // conquer

}

void printarray(int array[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int array[6] = {6,3,7,5,2,4};
    int n = 6;

    mergeSort(array,0,n-1);
    printarray(array,n);
    return 0;
}