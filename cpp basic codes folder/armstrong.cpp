#include<iostream>
using namespace std;

int main(){
    int n = 371;
    int cubeSum = 0;
    
    int num = n;
    while(num>0){
    int lastdig = num %10; 

    cubeSum += lastdig * lastdig * lastdig;

    num/=10;
    }

    if(n == cubeSum){
        cout<< "Armstrong";
    }

    else{
        cout<<"No is not Armstrong";
    }
    return 0;
}