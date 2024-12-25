#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;
    Node* prev;

Node(int val){
    data = val;
    next = NULL;
    prev = NULL;
}
};

class DoublyList{
public:
   Node *head;
   Node *tail;


DoublyList(){
    head = NULL;
    tail = NULL;
}

void push_front(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }

    else{
        newNode->next = head;
        head->prev = newNode;
        head =  newNode;
    }
}

void pop_front(){
    Node* temp = head;
    head=head->next;

    if(head!=NULL){
        head->prev = NULL;
        delete temp;
    }
}

void push_back(int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }

    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail = newNode;
    }
}

void pop_back(){

        if(tail==NULL){
            return;
        }

        Node* temp = tail;
        tail = tail->prev;

        if(tail==NULL){
            head = NULL;
        }
        else{
            tail->next=NULL;
        }
        delete temp;
    }


void PrintList(){
    Node* temp = head;

    while(temp!=NULL){
        cout<< temp->data << " <=> " ;
        temp=temp->next;
    }
    
    cout<<"NULL\n";

}
};

int main(){

    DoublyList dbll;

    dbll.push_front(6);
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.PrintList();

    dbll.pop_front();
    // dbll.pop_front();

    dbll.PrintList();

    dbll.push_back(7);
    dbll.push_back(8);
    dbll.push_back(9);
    dbll.push_back(10);

    dbll.PrintList();

    dbll.pop_back();

    dbll.PrintList();


    return 0;
}