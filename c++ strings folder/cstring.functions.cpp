#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){

    // char str1[100];
    // char str2[100]="Hello World";
    // // str1 = "Muskan chaudhary";
    // strcpy(str1,str2);
    // cout << str1 << endl;

    /////////////// CONCATENATE THE 2 STRINGS

    // char str1[100] = "hello";
    // char str2[100] = " world";

    // strcat(str1, str2);

    // cout<< str1 << endl;

    ////////////// COMPARES THE 2 STRING

    // char str1[100] = "mango";
    // char str2[100] = "strawberry";

    // cout << strcmp(str1,str2) << endl;

    //////////////   INPUT FRO STRING 
    
    // string str = "hello";
    // cin >> str;
    // cout << str << endl;

    // str = "yellow";
    // cout << str << endl;

    // string str;
    // getline(cin , str,'$');
    // cout << str << endl;

    ///////////////////// loops////////////////////

    //  string str = "Apna college!";

    //  for(int i = 0 ;i < str.length() ; i++){
    //     cout << str[i] << "-";
    //  }
     
    //  for (char ch : str){
    //     cout <<ch << ",";
    //  }

    ///////////// MEMBER FUNCTIONS ///////////
 
    // string str = "Sharda University";
    string str = "I love coding in c++ & c. I don't like python";

    cout << str.length() << endl; // ength function
    cout << str.at(3) << endl;   // for printing the particular index value
    cout << str.substr(1,5) << endl; // for printing the individual word in string
    cout << str.find("c++") << endl;


    return 0;
}