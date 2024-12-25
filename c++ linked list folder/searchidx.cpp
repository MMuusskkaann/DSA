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

      ~Node(){

        // cout << "~Node" << data << endl;
        if(next != NULL){
            delete next;
            next = NULL;
        }
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

    ~List(){
        // cout << "~List\n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head =  tail = newNode;
        }

        else{
            newNode->next = head;
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

    int  searchidx(int key){
        Node* temp = head;
        int idx = 0;

       while(temp != NULL){
        if(temp->data == key){
            return idx;
        }
        temp = temp->next;
        idx++;
       }

       return -1;
    }

    void printList(){
        Node* temp = head;
        while(temp!= NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
  
    ll.printList();

    cout << ll.searchidx(5) << endl;
    return 0;
} 