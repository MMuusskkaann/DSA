#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next; //points the address of the next node

public:  // constructor
   Node(int val){
    data = val ;
    next = NULL;
   }
};

class List{
  Node* head; // points the head of the list (jha sa list start hue hai)
  Node* tail; // points th last of the list(jha par list  khatam hue hai)
public:
 List(){
    head = NULL;
    tail = NULL;  
 }



};
int main(){

    List ll();
    return 0;
}