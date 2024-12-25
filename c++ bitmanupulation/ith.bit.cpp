#include<iostream>
using namespace std;

int getIthbit(int num,int i){
    int BitMask = 1 << i;

    if(!(num & BitMask)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){

    cout << getIthbit(6,2) << endl;
    cout << getIthbit(7,1) << endl;
    cout << getIthbit(7,5) << endl;
    return 0;
}

