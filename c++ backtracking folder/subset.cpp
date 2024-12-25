#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printsubsets(string str , string subset){

    if(str.size() == 0){
        cout << subset << "\n";
        return;
    }
    char ch = str[0];

    //yes choice
    printsubsets(str.substr(1,str.size()-1),subset+ch);


    //no choice
    printsubsets(str.substr(1,str.size()-1),subset);
    
    }

int main(){
  
  string str = "abc";
  string subset = "";

  printsubsets(str,subset);
    return 0;
}