#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str){
    stack<char> s;
    
    for(int i = 0 ; i <str.size() ; i++){
        char curr = str[i];

        if(curr == '(' || curr == '[' || curr == '{' ){ //opening condition
            s.push(curr);
        }

        else{ //closing condition
            if(s.empty()){  //insufficient of opening brackets
                return false;
            }

            //match
        
           int top = s.top();
           if((top == '(' && curr == ')' ) || 
              (top == '[' && curr == ']') ||
              (top == '{' && curr == '}')){
                s.pop();
              }

            else{
                return false;
              }
        }
    }

    if(s.empty()){
        return true;
    }

    else{
        return false;
    }
}

int main(){

    // string str1 = "([}])"; //invalid : false
    // string str2 = "([{}])"; //valis : true

    // cout << isValid(str1)<<endl; //0
    // cout << isValid(str2)<<endl; //1
  
    string str;
    cout << "Enter the value of string = ";
    cin >>  str;
     
    cout << isValid(str)<<endl;
    
    return 0;
}