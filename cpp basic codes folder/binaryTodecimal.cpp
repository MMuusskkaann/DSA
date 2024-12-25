#include<iostream>
using namespace std;

void bintodec(int binNum){
    int n = binNum;
    int decNum = 0;
    int pow = 1; //2^0

    while(n > 0){
        int lastdig = n % 10;
        decNum += lastdig * pow;
        pow = pow * 2;
        n = n / 10;
    }

    cout<< decNum << endl;
}

int main(){

    bintodec(101);
    return 0;
}