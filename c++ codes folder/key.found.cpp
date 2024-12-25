#include<iostream>
using namespace std;

int keyfound(int *array , int n , int key){
    int start = 0,end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(array[mid] == key){
             return mid;
        }

        if (array[start] <= array[mid] ){
           if(array[start] <= key && key < array[mid] ){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
        }

        else{
            if(array[mid] < key && key <= array[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            
        }
    }
}
return -1;
}


int main(){
    int array[] = {4,5,6,7,0,1,2};
    int n = sizeof(array)/sizeof(int);

    cout << "Key value at index = " << keyfound(array,n,0) <<endl;

    return 0;
}
