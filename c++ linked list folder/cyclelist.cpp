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
public:
    Node* head;
    Node* tail;

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

    void pop_front(){

        if(head == NULL){
            cout << "List is empty..*...\n";
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

};

void PrintList(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next; //+1
        fast = fast->next->next; //+2

        if(slow == fast){
            cout << "Cycle exist.....\n";
            return true;
        }
    }
    cout << "Cycle doesn't exist....\n";
    return false;

}
int main(){
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    ll.tail->next = ll.head;
    isCycle(ll.head);

    return 0;
}