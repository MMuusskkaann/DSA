#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "ener the size of array";
    cin >> n;

    int array[n]; //= {1,2,3,5,6};

     n = sizeof(array)/sizeof(int);
    for(int i = 0 ; i < n ; i++){
         cout << "enter the elements in array"<< endl; 
         cin >> array[i];
    }
    // int n = sizeof(array)/sizeof(int);

    bool isduplicate = false;

    for(int i = 0 ; i< n ; i++){
        for(int j = i+1 ; j< n ; j++){
            if(array[i] == array[j]){
            isduplicate =  true; 
            break;
        }
    }

    if(isduplicate){
        break;
    }
    }


    if(isduplicate){
        cout << " dublicate is found in array" << endl;
    }

    else{
        cout << " no dublicate is found in array" << endl;
    }

    return 0;
}



