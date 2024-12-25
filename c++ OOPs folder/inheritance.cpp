// #include<iostream>
// using namespace std;

// class Animal{

// public:
//    string color;
//    void eat(){
//     cout << "eats\n";
//    }    
//    void breathes(){
//     cout<<"breathes\n";
//    }

 
// };

// class Fish : public Animal{
// // class Fish : protected Animal{}    
// public:
//    int fins;

//    void swim(){
//     cout << "swims\n";
//    }
// };


// int main(){

//     Fish f1;
//     f1.fins = 3;
//     cout << f1.fins <<endl;
//     f1.swim();
//     f1.eat();
//     f1.breathes();

//     return 0;
// }

///////////////////////  MULTI - LEVEL INHERITANCE ////////////////////

// // #include<iostream>
// // using namespace std;

// // class Animal{
// // public :
// //    void eat(){
// //     cout <<"eats\n";
// //    }
    
// //    void breathes(){
// //     cout << "breathes\n";
// //    }

// // };

// // class Mammals : public Animal {

// // public:
// //    string bloodType;

// //    Mammals(){
// //     bloodType = "warm blooded";
// //    }
// // };

// // class Dog : public Mammals{

// // public:
// //    void tailWag(){
// //         cout << "a dog wag its tail\n";
// //    }  
// // };


// // int main(){

// //     Dog d1;

// //     d1.eat();
// //     d1.breathes();
// //     d1.tailWag();

// //     cout << d1.bloodType << endl;

// //     return 0;
// // }

///////////////////////////// MULTILPLE INHERITANCE ////////////////////////////

#include<iostream>
#include<cstring>
using namespace std;

class Teacher{
public:
   int salary;
   string subject;

};

class Student{
public:
   int rollno;
   float cgpa;

};

class TA: public Teacher , public Student{
public:
   string name;
};


int main(){

    TA tal;
    tal.name = "Muskan Chaudhary";
    tal.subject = "C++";
    tal.cgpa = 9.1;

    cout << tal.name << endl;
    cout << tal.subject << endl;
    cout << tal.cgpa << endl;    

    return 0;
}