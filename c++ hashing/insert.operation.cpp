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

public:

   Hashtable(int size = 5){
    totalsize = size;
    currsize = 0;

   table = new Node*[totalsize];

   for(int i = 0 ; i<totalsize ; i++){
    table[i] = NULL;
     }
   }


   void inserting(string key,int val){

    int idx = Hashfunction(key);

    Node* newNode = new Node(key,val);
    Node* head = table[idx];

    newNode->next = head;
    head = newNode;

    currsize++;
   }
};

int main(){
    return 0;
}
