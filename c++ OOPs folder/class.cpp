#include<iostream>
#include<cstring>
using namespace std;

class Student{

private:
    string password;

public:    
    string name;
    float cgpa;

    // Methods
    void getPercentage(){
        cout << (cgpa * 10 ) << "% \n";
    }
};


int main(){

    Student s1; // object
    s1.name = "Muskan chaudhary";
    s1.cgpa = 9.1;
    cout << s1.name << endl;
    cout << s1.cgpa << endl;
    s1.getPercentage();

    return 0;
}