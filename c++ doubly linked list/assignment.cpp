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
   Node *head;
   Node *tail;


List(){
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
        head =  newNode;
    }
}


void push_back(int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }

    else{
        tail->next=newNode;
        tail = newNode;
    }
}


    
    Node *getIntersectionNode(List &list2) {
    // Calculate the length of list A
    int lenA = 0;
    Node *tempA = head;
    while (tempA != nullptr) {
        lenA++;
        tempA = tempA->next;
    }

    // Calculate the length of list B
    int lenB = 0;
    Node *tempB = list2.head;
    while (tempB != nullptr) {
        lenB++;
        tempB = tempB->next;
    }

    // Move the head pointer of the longer list by the difference in lengths
    tempA = head;
    tempB = list2.head;
    if (lenA > lenB) {
        int diff = lenA - lenB;
        while (diff--) {
            tempA = tempA->next;
        }
    } else {
        int diff = lenB - lenA;
        while (diff--) {
            tempB = tempB->next;
        }
    }

    // Traverse both lists together until the intersection node is found
    while (tempA != nullptr && tempB != nullptr) {
        if (tempA == tempB) {
            return tempA;
        }
        tempA = tempA->next;
        tempB = tempB->next;
    }

    // else return NULL
    return NULL;
}


void PrintList(){
    Node* temp = head;

    while(temp!=NULL){
        cout<< temp->data << " -> " ;
        temp=temp->next;
    }
    
    cout<<"NULL\n";

}
};

int main(){

    List ll;
    List ll2;

    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.PrintList();


    ll2.push_front(10);
    ll2.push_front(9);
    ll2.push_front(8);
    ll2.push_front(7);
    ll2.push_front(6);
    ll2.push_front(5);
    ll2.PrintList();

    // Node* intersection = ll.getIntersectionNode(ll2);

     // Make the lists intersect
    Node* temp = ll.head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* temp2 = ll2.head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp->next;

    ll.PrintList();
    ll2.PrintList();

    Node *intersection = ll.getIntersectionNode(ll2);
    if (intersection != NULL) {
        cout << "Intersection node: " << intersection->data << endl;
    } else {
        cout << "No intersection node found." << endl;
    }




    return 0;
}
