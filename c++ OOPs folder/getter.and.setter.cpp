#include<iostream>
#include<cstring>
using namespace std;

class Student{

private:
    string name;
    float cgpa;

public:    

    void getPercentage(){
        cout << (cgpa * 10 ) << "% \n";
    }

    //Setters
    void setName(string nameVal){
        name = nameVal;
    }

    void setcgpa(float cgpaVal){
        cgpa = cgpaVal;

    }


    //Getter
    string getName(){
        return name;
    }

    float getcgpa(){
        return cgpa;
    }
    
};



int main(){
    Student s1;
    s1.setName("Muskan chaudhary");
    s1.setcgpa(9.1);

    cout << s1.getName() << endl;
    cout << s1.getcgpa() << endl; 
    


return 0;
}