#include<iostream>
using namespace std;


int BinarySearch(int *array, int n,int key ){
    int st = 0;
    int end = n-1;

    // int mid = (st+end) / 2;

    while(st<=end){
    int mid = (st+end) / 2;

        if(array[mid] == key){
            return mid;
        }

        else if(array[mid] < key){
            st = mid + 1;
        }
        
        else{
            end = mid-1;
        }
    }
    return -1;

}
int main(){
    int array[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(array)/sizeof(int);

    cout << "Binary value at index = "<<BinarySearch(array,n,14)<<endl;
}