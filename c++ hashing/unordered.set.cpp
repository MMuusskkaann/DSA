#include<iostream>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(1);    
    s.insert(1);
    s.insert(1);    
    //duplicate valuse second yime insert nhi hote
    
    cout << s.size() << endl;

    if(s.find(3) != s.end()){
        cout<< "3 exists\n";
    }
    else{
        cout<<"3 does  not exists\n";
    }

    for(auto el : s){
        cout << el << " ";
    }
    cout << endl;
    return 0;
}