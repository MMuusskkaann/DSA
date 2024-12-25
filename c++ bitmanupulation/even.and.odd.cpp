#include<iostream>
using namespace std;

void oddOreven(int num){
    if(!(num & 1)){
        cout << "Even....\n";
    }
    else{
        cout << "Odd....\n";
    }
}

int main(){

    int num;
    cout << "Enter your number : ";
    cin >> num;

    oddOreven(num);

    return 0;
}