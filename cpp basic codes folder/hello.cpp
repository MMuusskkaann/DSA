#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    // float PI = 3.14159265358;
    // double PI2 = 3.14159265358;

    // cout<<setprecision(15)<<PI<<"\n";
    // cout<<setprecision(15)<<PI2<<"\n";

    int n = 5;
    bool isPrime = true;

    for(int i = 2 ; i<=sqrt(n) ; i++){
      if(n%i == 0){ // i is a factor of n 
        isPrime = false;
        break;
    }
}

    if(isPrime){
      cout<< "Prime number";
   }

   else{
    cout<< " Not a Prime number";
}


    return 0;
}
