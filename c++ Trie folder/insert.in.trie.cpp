#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

class Node{
public:
    unordered_map<char,Node*> children;
    bool endofwords;

   Node(){
    endofwords = false;
   }
};

class Trie{
    Node* root;

public:
   Trie(){
   root = new Node();
   }


void insert(string key){
    Node* temp = root;

    for(int i = 0 ; i< key.size() ;i++){
       if(temp->children.count(key[i]) == 0){
            temp->children[key[i]] = new Node();
       }

       temp = temp->children[key[i]];
    }
   temp->endofwords = true;
}
};

int main(){

    vector<string> words = {"the","a","there","their","any","thee"};

    Trie tries;

    for(int i = 0 ; i < words.size() ; i++){
        tries.insert(words[i]);
    }
    return 0;
}