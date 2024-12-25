#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

bool isDuplicate(string str){
    stack<char> s;

    for(int i = 0 ; i < str.size() ; i++){
        char ch = str[i];
        if(ch!=')'){  //non-closing case
            s.push(ch);
        }

        else{ //closing
            if(s.top() == '('){
                return true; //duplicate
            }

            while(s.top() != '('){
                s.pop();
            }
            s.pop();
        }
    }

    return false;
}


int main(){

    string str;
    cout<<"Enter parenthasis = ";
    cin>>str;

    cout<<isDuplicate(str);
    return 0;
}