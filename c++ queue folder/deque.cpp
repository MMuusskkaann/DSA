#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int> deq;

    deq.push_front(2);
    deq.push_front(1);

    deq.push_back(3);
    deq.push_back(4);

    deq.pop_front();
    // cout<<deq.front()<<endl;

    deq.pop_back();
    cout<<deq.front()<<endl;
    cout<<deq.back()<<endl;
    return 0;
}