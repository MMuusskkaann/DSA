// // // #include<iostream>
// // // #include<cstring>
// // // using namespace std;

// // // class Complex{

// // // int real;
// // // int img;

// // // public :
// // //      Complex(int r, int i){
// // //          real = r;
// // //          img = i;
// // // }

// // // void showNum(){
// // //     cout << real << " - " << img << "i" << endl;
// // // }

// // // Complex operator - (Complex &c2){
// // //     int resReal = this->real - c2.real;
// // //     int resImg = this->img - c2.img;
// // //     Complex c3(resReal,resImg);
// // //     return c3;
// // // }

// // // };
// // // int main(){

// // //     Complex c1(1,2);
// // //     Complex c2(3,4);
    
// // //     c1.showNum();
// // //     c2.showNum();

// // //     Complex c3 = c1 - c2;

// // //     cout << "--------\n";
// // //     c3.showNum();


// // //     return 0;
// // // }

// // ////QUESTION NUMBER 2ND//////

// // // Question2:Create ac lassBankAccount with private attributes accountNumber and balance.
// // // Implement public methods deposit(),withdraw(),andgetBalance()to manage the account.

// // #include<iostream>
// // #include<cstring>
// // using namespace std;

// // class BankAccount{
// //     private:
// //       int accountnumber;
// //       int balance;

// //     public: BankAccount(int accnum ,int bal){
// //        accountnumber = accnum;
// //        balance = bal;

// //     }

// //     void deposit(double amount){
// //         balance += amount;
// //     } 

// //     void withdraw(double amount){
// //         if(amount <= balance){
// //             balance -= amount;
// //         }

// //         else{
// //             cout << "Insufficient balance" << endl;
// //         }
// //     }

// //     int getbalance(){
// //         return balance;
// //     }
// // };

// // int main(){

// //     BankAccount myAccount(12234,500);
// //     myAccount.deposit(150);
// //     myAccount.withdraw(100);
// //     cout << "Balance : " << myAccount.getbalance() << "Rs" << endl; 
// //     return 0;
// // }

// /////QUESTION  NUMBER = 3//////
// //Create a base class Person with attributes name and age.
// // Derive a class Student from Person and add an additional attribute studentID.
// // Implement a method display Student Info() in the Student class to display all details.
// // In main function Student class object will be created in this format:
// // Studentstudent("Alice",20,"S12345");

// #include<iostream>
// #include<cstring>
// using namespace std;

// class Person{
//     protected:
//        string name;
//        int age;

//     public: 

//       Person(string n , int a){
//         name = n;
//         age = a;
//     }
// };

// class Student : public Person{
//     private : 
//       string StudentID;

//     public : 
//      Student(string n ,int a ,string id) : Person(n,a){
//             StudentID = id;
//      }

//     void displayStudentInfo(){
//         cout << "Name = " << this->name << endl;
//         cout << "Age = "  << this->age << endl;
//         cout << "Student ID = " << this->StudentID << endl;
//     } 
// };
// int main(){

//     Student s1("Alice",20,"s12345");
//     s1.displayStudentInfo();
//         return 0;
// }






