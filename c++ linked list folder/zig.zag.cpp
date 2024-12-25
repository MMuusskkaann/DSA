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

Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;

}
Node* zigZagList(Node* head) {
    if (!head || !head->next) {
        return head;
    }
    
    Node* righthead = splitAtMid(head); // Split the list at the middle
    Node* rightheadprev = reverse(righthead); // Reverse the second half of the list

    // Alternate merging: 1st head = head, 2nd head = righthead 
    Node* left = head; // head of the first half
    Node* right = rightheadprev; // head of the reversed second half

    while (left != NULL && right != NULL) {
        Node* nextleft = left->next;
        Node* nextright = right->next;

        left->next = right;
        if (nextleft != NULL) {
            right->next = nextleft;
        }
        
        left = nextleft;
        right = nextright;
    }

    // Ensure the last node points to NULL in case of an odd-length list
    if (left != NULL) {
        left->next = NULL;
    }

    return head;
}

int main() {
    List ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    ll.head = zigZagList(ll.head);
    ll.printList();

    return 0;
}
