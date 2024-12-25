#include<iostream>
using namespace std;

class Parent{
    public:

    void show(){
       cout << "Parent class show...\n";
    }

    virtual void hello(){
        cout << "Parent hellow..\n";
    }
};

class Child :public Parent{
    public:
       void show(){
         cout << "Chils class show...\n";
       }

       void hello(){
        cout << "Child hello...'\n";
       }
};
int main(){
    Child child1;
    Parent *ptr;

    ptr=&child1; //Rum time binding (jab code run karna start kar data ha tab hote ha ya binding)
    ptr->hello(); // virtual functions

    return 0;
}