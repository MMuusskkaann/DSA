#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    priority_queue<string> pq;

    pq.push("Hii");
    pq.push("My");
    pq.push("name");
    pq.push("is");
    pq.push("Muskan");
    pq.push("chaudhary");
    
    while(!pq.empty()){
        cout<<"top : " << pq.top()<<endl;
        pq.pop();
    }

    return 0;
}

