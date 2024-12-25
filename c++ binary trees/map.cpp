#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include<map>

int main(){
    map<int,string> m;

    m[1097] = "Muskan";
    m[1438] = "Neha";
    m[8987] = "Neha";
    m[1097] = "Anaya";

    // cout<<m[1097] <<endl; //for printing the key
    // cout<<m[1438] << endl;
    // cout<<m[8978] << endl;
    // cout<<m[8987] << endl;

    //for printing the count->key exist or not
    // cout<<m.count(1097)<<endl;

    // printing using the loop
    for(auto it : m){
        // cout<< "Key = "<<it.first<<" "<< "Value = "<<it.second<<" " << endl;
        //for printing the double 
        cout<<"double = "<<it.first * 2 <<endl;
    }
    return 0;
}
