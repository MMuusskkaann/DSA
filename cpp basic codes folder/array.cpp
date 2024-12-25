#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n : ";
    cin >> n;

    int array[n];

    cout<<"Enter the value of the arrays : " << endl;
    for(int i = 0 ; i<n ;i++){
        cin>>array[i];
    }

    for(int i = 0 ; i<n ;i++){
        cout<<array[i]<<" ";
    }
    
    int max = array[0];
    int min = array[0];

    for(int i = 0 ; i<n ;i++){
        if(array[i] > max){
            max = array[i];
        }

        if(array[i] < min){
            min = array[i];
        }
    }
    cout<<endl;
    cout<<"Max value = " << max<<endl;;
    cout<<"Min value = " << min<<endl;;

    return 0;
}
