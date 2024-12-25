#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
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
    public:
      Node* root;

      Trie(){
        root = new Node();
      }

      void insert(string key){
        Node* temp = root;

        for(int i = 0 ; i < key.size() ; i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node;
            }

            temp = temp->children[key[i]];
        }
        temp->endofwords = true;
      }


      bool search(string key){
        Node* temp = root;

        for(int i = 0 ; i<key.size() ; i++){
            if(temp->children.count(key[i])){
                temp = temp->children[key[i]];
            }

            else{
                return false;
            }
        }

        return temp->endofwords;
      }


bool startswith(string prefix){
    Node* temp = root;

    for(int i = 0 ;i < prefix.size() ; i++){
        if(temp->children[prefix[i]]){
          temp = temp->children[prefix[i]];
        }
       
       else{
        return false;
       }
    }

    return true;
}
};

int main(){

    vector<string> words = {"apple","app","mango","man","woman"};

    Trie trie;
    for(int i = 0 ; i <words.size();i++){
        trie.insert(words[i]);
    }

    cout << trie.startswith("app")<<endl;
    cout << trie.startswith("wom")<<endl;
    cout << trie.startswith("moon")<<endl;
    return 0;
}