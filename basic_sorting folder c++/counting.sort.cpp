#include<iostream>
using namespace std;

void print(int array[],int n){
    for(int i = 0 ; i< n ; i ++){
        cout << array[i] << " ";
    }
}


void countsort(int array[],int n){
    int freq[100000]; //range
    int minVal = INT8_MAX,maxVal = INT8_MIN;
    for(int i = 0 ; i < n ; i++ ){
        minVal = min(minVal,array[i]);
        maxVal = max(maxVal,array[i]);
    }

    //1st step - O(n)
    for(int i = 0 ; i< n ; i++){
        freq[array[i]]++;
    }

       // 2nd step - O(range) = max - min
        for(int i = minVal,j=0 ; i < maxVal ; i++){
          while(freq[i] > 0){
            array[j++] = i;
            freq[i]--;

        }
    }
    print(array,n);
}
int main(){

    int array[8] = {1,4,1,3,2,4,3,7};
    countsort(array,8);

    return 0;
}