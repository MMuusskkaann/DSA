#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
public: 
  string key;
  int val;
  Node* next;

  Node(string key,int val){
    this->key = key;
    this->val = val;
    next = NULL;
  }

  //destructor to delete a node
  ~Node(){
    if(next != NULL){
        delete next;
    }
  }
};

class Hashtable{
    int totalsize;
    int currsize;
    Node** table;

   int Hashfunction(string key){

    int idx = 0;

    for(int i = 0 ; i <key.size() ; i++){
        idx = idx + (key[i] * key[i]) % totalsize;
    }
     
      return idx;

   }
   

   //TC = O(n)
   void rehash(){
    Node** oldtable = table;
    int oldsize = totalsize;

    totalsize = 2*totalsize;
    table = new Node*[totalsize];

    for(int i = 0 ; i <totalsize ; i++){
        table[i] = NULL;
    }
    
    //copy old table into new table
    for(int  i = 0 ; i<oldsize ; i++){
        Node* temp = oldtable[i];

        while(temp!=NULL){
            inserting(temp->key,temp->val);
            temp= temp->next;
        }

      if(oldtable[i] != NULL){
        delete oldtable[i];
      }
   }

   delete[] oldtable;
}

public:

   Hashtable(int size = 5){
    totalsize = size;
    currsize = 0;

   table = new Node*[totalsize];

   for(int i = 0 ; i<totalsize ; i++){
    table[i] = NULL;
     }
   }


void inserting(string key,int val){ //O(1)

    int idx = Hashfunction(key);

    Node* newNode = new Node  (key,val);
    Node* head = table[idx];

    newNode->next = head;
    head = newNode;

    currsize++;

    double lambda = currsize/(double)totalsize;
    if(lambda > 1){
      rehash(); //O(n)   
    }
   }


void remove(string key){


}
};

int main(){
    return 0;
}
