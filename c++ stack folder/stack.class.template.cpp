#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<class T>
class Stack{
vector<T> vec;

public:

  void push(T val){
    vec.push_back(val);
  }

  void pop(){
    if(isEmpty()){
        cout<<"Stack is empty......\n";
    }
    vec.pop_back();
  }

T top(){
    int lastIdx = vec.size()-1;
    return vec[lastIdx];
}

bool isEmpty(){
    return vec.size()==0;
}
};
int main(){

    Stack<char> s;

    //  s.push('g');
     s.push('N');
     s.push('A');
     s.push('K');
     s.push('S');
     s.push('U');
     s.push('M');

     while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
     }
    return 0;
}