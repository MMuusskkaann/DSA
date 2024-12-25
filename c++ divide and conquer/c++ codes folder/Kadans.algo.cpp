#include<iostream>
using namespace std;

void Kadansalgo(int *array,int n){
    int maxsum= INT8_MIN;
    int currsum = 0;

    for(int i = 0 ; i < n ; i++){
        currsum+= array[i];

        maxsum = max(maxsum,currsum);

        if(currsum < 0){
            currsum = 0;
        }
    }

    cout << "maximum sub array sum = " << maxsum << endl;
}

int main(){
    int  array[6] = {2,-3,6,-5,4,2};
    int n = sizeof(array)/sizeof(int);
    

    Kadansalgo(array,n);

    return 0;
}