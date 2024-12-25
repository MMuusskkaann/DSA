#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
       void show() {
       cout << "Parent class show..." << endl;
}
};

class Child : public Parent {
    public:
    void show(){
       cout << "Child class show..." << endl;
}
};

int main(){

    Child child1;
    child1.show();
    return 0;
}