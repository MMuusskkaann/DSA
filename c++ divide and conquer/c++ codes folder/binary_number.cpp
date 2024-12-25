#include<iostream>
using namespace std;

// CONVERTA BINARY TO DECIMAL
// void bintdec(int binNum){
//  int n = binNum;
//  int decNum = 0;
//  int pow = 1; //2^0 2^1 2^2
  
//   while(n>0){
//     int lastdg = n % 10;
//     decNum += lastdg * pow;
//     pow = pow*2;
//     n = n /10;
//   }
//   cout << decNum << endl;
// }

//CONVERT DECIMAL  TO BINARY 

int decTbin(int decnum){
int n =decnum;
int pow = 1;
int binnum = 0;
while(n>0){
    int rem = n % 2;
    binnum += rem * pow;
    n = n/2;
    pow = pow*10;

}
cout << "Binary of decimal number " << decnum << " = " <<binnum << endl;
}
int main(){

    // bintdec(1011);
    decTbin(4);
    // long long x = 34;
    // cout << sizeof(int) <<endl;
    // cout << sizeof(long long int) <<  endl;


    return 0;

}