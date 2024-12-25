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
};

int main(){

    vector<string> words = {"the","a","there","their","any","thee"};

    Trie tries;

    for(int i = 0 ; i < words.size() ; i++){
        tries.insert(words[i]);
    }

    cout<< tries.search("their") << endl;
    cout<< tries.search("ant") << endl;
    return 0;
}