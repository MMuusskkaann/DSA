#include<iostream>
using namespace std;

class Parent{
    public:
    
    Parent(){
        cout << "Constructor of parent\n";
    }

    ~Parent(){
        cout << "Dsstructor of parent\n";
    }
};

class Child : public Parent{
    public:
      Child(){
      cout << "Constructor of children\n";
      }

      ~Child(){
      cout << "Destructor of children\n";
      }
};
int main(){
    Child ch1;
    return 0;
}

