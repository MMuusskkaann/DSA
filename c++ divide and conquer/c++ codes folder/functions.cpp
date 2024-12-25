#include<iostream>
using namespace std;

// void sayhello(){
//     cout << "HELLO :)\n";
// }
// int sum(int a,int b = 1){ // a,b parameter
//     int sum =a + b ;
//     return sum;
// }

int diff(int a,int b ){  // first parameter cannot be default
   int diff=a=b;
    return diff;
}

void sum(int a, int b){
    int s = a+b;
    cout<<s;
}

int main(){

// int s = sum(2);
// cout<< "sum = " << s<<endl;

// int d = diff( 6,3);
// cout<<"diff = " << d <<endl;
sum(5,4);
int s=9;
cout<<s;


    return 0;
}
