#include<iostream>
using namespace std;

class Car{

public:    
    string name;
    string color;
    int *mileage;

    Car(string name,string color){
        this->name = name;
        this->color = color;
        mileage = new int; //Dynamic Allocation
        *mileage = 12;
    }

    Car(Car &original){
        cout << "Copying original to new..\n";
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~Car() {
        cout << "Deleting object..\n";
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }

};
int main(){

    // Car c1("Lamborgini","Yellow");
    // cout << c1.name << endl;
    // cout << c1.color << endl;
    // cout << *c1.mileage << endl;
    return 0;
}