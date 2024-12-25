#include<iostream>
using namespace std;


void MaxSubArray(int *array,int n){
    int maxSum = INT8_MIN;

    for(int start = 0 ; start < n; start++){  //start = 2
        int Currsum = 0;
        for(int end = start; end < n ; end++){ // 2 3 4 5
         Currsum +=  array[end];
         maxSum = max(maxSum , Currsum);
        }
    }
    cout << "Maximum sub array sum = " << maxSum << endl;
}
int main(){
   
   int array[6] = {2,-3,6,-5,4,2};
   int n = sizeof(array) / sizeof(int);

   MaxSubArray(array,n);

    return 0;
}