#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void pushatBottom(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
        return;
    }


    int temp = s.top();
    s.pop();
    pushatBottom(s,val);
    s.push(temp);
}
void reverse(stack<int> &s){

    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushatBottom(s,temp);

} 

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){

    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    printStack(s);

    reverse(s);

    printStack(s);
    return 0;
}