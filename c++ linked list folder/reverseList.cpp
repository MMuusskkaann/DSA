#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

   Node(int val){
    data = val;
    next = NULL;
   }    
};

class List{
    Node* head;
    Node* tail;

public:
   List(){
    head = NULL;
    tail = NULL;
   } 

void push_front(int val){
    Node* newNode = new Node(val); //dynamic memory allocaion because ya node elete nhi hote function sa bahar ana ka baad bhi
    // Node* newNode(val); // static memory allocation node create ho jati par baad ma delete ho jat9i function ka baad

    if(head == NULL){
        head = tail = newNode;
    }

    else{
        newNode->next = head; //new node 
        head = newNode;
    }
  }  

 void push_back(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
    }

    else{
        tail->next = newNode;
        tail = newNode; 
    }
    
  } 
  
  

  void ReverseList(){
    Node* curr = head;
    Node* prev = NULL;
    tail = head;
   
   while(curr != NULL){
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;

   }
   head= prev;


  }
  void printList(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<" -> ";
        temp = temp->next;

    }
  cout << "NULL\n";    
  }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //1->2->3->1->NULL
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();

    ll.ReverseList();
    ll.printList();

    return 0;
}