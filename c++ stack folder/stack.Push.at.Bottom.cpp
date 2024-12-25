#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int val){ //O(n)
    if(s.empty()){
        s.push(val); //pust at top = push at bottom
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

int main(){
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s,40);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;


    return 0;
}
