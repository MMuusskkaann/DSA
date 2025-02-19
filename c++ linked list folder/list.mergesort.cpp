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

  void printList(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<" -> ";
        temp = temp->next;

    }
  cout << "NULL\n";    
  }
};

Node* splitAtMid(Node *head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next!=NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev!=NULL){
        prev->next = NULL; //split at middle
    }

    return slow; // slow = right head

}

Node* Merge(Node* left,Node* right){
    List ans;
    Node* i = left;
    Node* j = right;

    while(i != NULL && j != NULL){
        if(i->data <= j->data){
            ans.push_back(i->data);
            i = i->next;

        }

        else{
            ans.push_back(j->data);
            j = j->next;
        }
    }
   while(i!= NULL){
    ans.push_back(i->data);
    i = i->next;
   }

   while(j!=NULL){
    ans.push_back(j->data);
    j = j->next;
   }

   return ans.head;
}


Node* Mergesot(Node* head){
    if(head== NULL || head->next == NULL){
        return head;
    }
    Node* rightHead=splitAtMid(head);

    Node* left = Mergesot(head); // left head
    Node* right = Mergesot(rightHead); //right head

    return Merge(left,right); // head of sorted list

}
int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);

    ll.printList();

    ll.head = Mergesot(ll.head);
    ll.printList();
    return 0;
}

