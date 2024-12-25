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
  
  int helper(Node*  temp, int key){
    if(temp == NULL){
        return -1;
    }
    if(temp->data == key){
        return 0;
    }

    int idx = helper(temp->next , key);
    if(idx == -1){
        return -1;
    }
    return idx+1;

  }
  int reverseSearch(int key){
    return helper(head,key);
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


    cout << ll.reverseSearch(4) << endl;
    return 0;
}