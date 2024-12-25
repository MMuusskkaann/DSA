#include<iostream>
using namespace std;
  
  void print(int array[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << array[i] << " ";
    }
  }
//BUBBLE SORT IN DECSCENDING ORDER

void bubblesort(int array[],int n){
    for(int i = 0 ; i< n - 2 ; i++){
        for(int j = 0 ; j< n - i - 1 ; j++){
            if(array[j] < array[j+1]){
            swap(array[j],array[j+1]);
            }
        }
    }

    print(array,n);
}

//SELECTION SORT IN DESCENDING ORDER

void selectionsort(int array[],int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int mididx = i;
        for(int j = i+1 ; j < n ; j++){
            if(array[j] > array[mididx]){
            mididx = j;
        }
        }
        swap(array[i],array[mididx]);
    }
    print(array,n);
}


// INSERTION SORT IN DESCENDING ORDER

void insertionsort(int array[],int n){
    // time complexity O(n^2)
    for(int i = 1 ; i< n ; i++){  
        int current = array[i];
        int prev = i - 1;
        while(prev >= 0 && array[prev] < current ){
            swap(array[prev],array[prev+1]);
            prev--;
        }
        array[prev+1] = current;
    }
    print(array,n);
}

// COUNTING SORT IN DESCENDING ORDEER

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

    int array[10]= {3,6,2,1,8,7,4,5,3,1};
    bubblesort(array,10);
    cout << endl;
    selectionsort(array,10);
    cout<<endl;
    insertionsort(array,10);
    cout << endl;
    countsort(array,10);
    return 0;
}