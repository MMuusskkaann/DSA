#include<iostream>
#include<string>
using namespace std;

class User{

private:
     int id;
     string password;

public:
      string username;

      User(int id){
        this -> id = id;

  }

  //getter

  string getPassword(){
    return password;
  }

  // setter

  void setPassword(string password){
    this->password = password;
  }
};

int main(){

    User user1(235);
    user1.username = "Muskan chaudhary";
    user1.setPassword("abcd");
   
   cout << "Username : " << user1.username << endl;
   cout << "Password : " << user1.getPassword() <<endl;

    return 0;
}