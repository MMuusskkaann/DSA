#include<iostream>
using namespace std;

void print(int array[],int n){
    for(int i = 0 ; i<n ; i++){
        cout << array[i] <<" ";
    }
    cout << endl;
}

int partition(int array[], int si ,int ei){
    int i = si - 1;
    int pivot = array[ei];

    for(int j = si ; j<ei ; j++){
        if(array[j] <= pivot){
            i++;
            swap(array[i],array[j]);
        }
    }
    i++;
    swap(array[i], array[ei]);
    //pivot index = i
    return i;
}

void quickSort(int array[] , int si ,int ei){
    if(si >= ei){
        return;
    }
   int  pivotIdx = partition(array,si,ei);

   quickSort(array,si,pivotIdx-1); // left half
   quickSort(array,pivotIdx+1,ei); // right half 
}
int main(){

    int array[6] = {6,3,7,5,2,4};
    int n = 6;
    quickSort(array,0,n-1);
    print(array,n);
    return 0;
}

