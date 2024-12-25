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

class HashTable{
    int totalsize;
    int currsize; // for rehashing
    Node** table;

public:
   HashTable(int size = 5){
    totalsize = size;
    currsize = 0;

    table = new Node*[totalsize];
    
    for(int i = 0 ; i < totalsize;i++){
        table[i] = NULL;
    }
  }

//   void insert(string key,int  val){

//   }  

//   void remove(string key){

//   }

//   int search(string key){

//   }
};

int main(){
    HashTable ht;

    return 0;
}