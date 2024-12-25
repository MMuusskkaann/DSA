#include<iostream>
using namespace std;
int fact(int n ){
int fact = 1;
for(int i = 1 ; i<= n ; i++){
    fact = fact * i;
}
return fact;
}

int bincoeff(int n , int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);

    int result = val1 / (val2 * val3);

    return result;
}
int main(){

    int n,r;
    cout << " enter n = ";
    cin>>n;

    cout << "enter r = ";
    cin >> r;

    cout << "binomial coefficient = "<< bincoeff(n,r) << endl;


    return 0;
}