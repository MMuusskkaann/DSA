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



    //pop back

    void pop_front(){

        if(head == NULL){
            cout << "List is empty..*...\n";
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }


    //pop back

    void pop_back(){
        if(head == NULL){
            cout << "List is empty...*....\n";
        }

        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
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
        while(temp!= NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
        }
        cout << "NULL\n";
    }




   int getsize(){
    int size = 0;
    Node* temp = head;
    
    while(temp!=NULL){
        temp = temp->next;
        size++;
    }
    return size;
   }

   void removeNth(int n){
    int size = getsize();
    Node* prev = head;
    for(int i = 1  ; i< (size-1) ; i++){
        prev = prev->next; //i = size-n=> prev => deletion node prev
    }
    Node* toDel = prev->next;
    cout<<"Going to delete..."<<toDel->data<< endl;
    prev->next=prev->next->next;
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

    // ll.pop_front();

    // ll.push_back(5);
    // ll.push_back(6);
    // ll.push_back(7);
    // ll.push_back(8);
    // ll.pop_back();
    // ll.printList();

    ll.removeNth(2);
    ll.printList();

    return 0;
}