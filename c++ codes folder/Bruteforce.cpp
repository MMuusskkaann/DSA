#include<iostream>
using namespace std;
  

void maxSubarraySum(int *array,int n){
    int maxSum = INT8_MIN;

    for(int start = 0 ; start < n ;start++ ){
        for(int end = start ; end < n ; end++){
            int Currsum = 0;
            for(int i = start ; i<=end ; i++){
                   Currsum += array[i];
            }    
        cout << Currsum<<" , "; 
        maxSum = max(maxSum , Currsum);

    }
    cout << endl;
}

cout << "maximum subarry sum = " << maxSum << endl;
}
int main(){

    int array[6] = {2,-3,6,-5,4,2};
    int n = sizeof(array)/sizeof(int);

    maxSubarraySum(array,n);
    return 0;
}