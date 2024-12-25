#include<iostream>
using namespace std;

void change(int a){
    a = 20;
    cout<< a << endl;
}
//pass by refrence

void change2(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}

int main(){
    int a =19;
    // int *ptr = &a;

    // cout << &a << " = " << ptr <<"\n";
    // cout<< sizeof(ptr) << endl;
    // cout<< sizeof(int) << endl;
    change(a);
    cout<< a << endl;
    change2(&a);
}
