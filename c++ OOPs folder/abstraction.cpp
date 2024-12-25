#include<iostream>
using namespace std;

//Abstaract class 
class Shape{
    virtual void draw() = 0; // pure vitual function,abstract funcyion
};

class Circle : public Shape {
    public:
       void draw(){
        cout << "Draw circle\n";
       }
};

class Square :public Shape{
    public:
       void draw(){
           cout << "Draw square\n";
       }
};
int main(){

    Circle c1;
    c1.draw();

    Square squ1;
    squ1.draw();
    return 0;
}