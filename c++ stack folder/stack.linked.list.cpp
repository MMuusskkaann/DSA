#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

template<class T>
class Node{
public:
  T data;
  Node* next;

   Node(T val){
    data = val;
    next = NULL;
   }
};

template <class T>
class Stack{
  // list<T> ll; with using stl list
  Node<T>* head;

public:
  Stack(){
    head = NULL;
  }
  void push_front(T val){
    // ll.push_front(val);
    Node<T>* newNode = new Node<T>(val);
    if(head==NULL){
      head = newNode;
    }

    else{
      newNode->next = head;
      head = newNode;
    }

  }

  void pop(){
    // ll.pop_front(); by using stl list
Node<T>* temp = head;
head = head->next;
temp->next = NULL;
delete temp;

  }


  T top(){
    // return ll.front(); though stl
    return head->data;
  }

  
  bool isEmpty(){
    // return ll.size()==0;
    return head==NULL;
  }
};

int main(){

    // Stack<int> s;but 
     Stack<int> s; //ager stl sei keragne toh class sei nhi kerange use
    
   s.push_front(5);
   s.push_front(4);
   s.push_front(3);
   s.push_front(2);
   s.push_front(1);

   while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();
   }
   cout<<endl;
    return 0;
}  