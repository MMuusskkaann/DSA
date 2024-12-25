#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:

    // Car(string nameValue,string colorValue){
    //     cout << "Constructor is called object being creatad....\n";
    //     name = nameValue;
    //     color = colorValue;
    // }

    /////  THIS use
    Car(){
       cout << "Constructor without perameter...\n";
    }

    Car(string name,string color){
        cout << "Constructor is called object being creatad....\n";
        this->name = name;
        this->color = color;
    }    
    
      void start(){
        cout << "CAR has started....." << endl;
      }

     void stop(){
        cout << "CAR has stopped....." << endl;
     }  
     

     // Getter
     string getName(){
        return name;
     }
};

int main(){
    Car c0; // non parameter
    Car c1("Lamborgini","Yellow"); // parameter
    Car c2("Mercedes Benz","Black");

    // cout <<"Car name : " << c1.getName() <<endl;
    return 0;
}