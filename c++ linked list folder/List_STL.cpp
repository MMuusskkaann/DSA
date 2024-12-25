#include<iostream>
#include<List>
#include<iterator>
using  namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;
    for(itr = ll.begin() ; itr != ll.end() ; itr++){
        cout << (*itr) << " -> ";
    }
    cout<<"NULL"<<endl;
}

int main(){
    list<int> ll; //vector<int> arr

    ll.push_front(4);
    ll.push_front(3);    
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(5);
    ll.push_back(6);
   
    printList(ll);
    cout<<"Size = " <<ll.size()<<endl;
    cout<<"Head = " <<ll.front()<<endl;
    cout<<"Tail = " <<ll.back()<<endl;

    ll.pop_front();
    printList(ll);

    ll.pop_back();
    printList(ll);

    ll.insert(ll.begin(),2);
    ll.insert(ll.end(),100); 
    printList(ll);

    return 0;
}