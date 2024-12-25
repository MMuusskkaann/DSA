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
        root=new Node();
    }

void insert(string key){
    Node* temp = root;

    for(int i = 0 ; i < key.size() ; i++){
        if(temp->children.count(key[i]) == 0){
            temp->children[key[i]] = new Node();
        }
          temp = temp->children[key[i]];
    }
    temp->endofwords = true;
 }


bool search(string key){
    Node* temp = root;

   for(int i = 0 ; i < key.size() ; i++){
    if(temp->children.count(key[i])){
        temp = temp->children[key[i]];
    }
    else{
        return false;
     }
    }
   return temp->endofwords;
 }



void longesthelper(Node* root , string &ans,string temp){
    for(pair<char,Node* > child : root->children){
        if(child.second->endofwords){
        temp+=child.first;

    if(temp.size() == ans.size() && temp < ans || (temp.size() > ans.size())) {
        ans = temp;
      }

      longesthelper(child.second,ans,temp);
      temp = temp.substr(0,temp.size()-1);
    }
  }
}

 string longestStringwithEOW(){
    string ans = "";
    longesthelper(root,ans,"");
    return ans;
 } 
};

string longestString(vector<string> dict){
    Trie trie;
    
    for(int i = 0 ; i < dict.size() ; i++){
        trie.insert(dict[i]);
    }

    return trie.longestStringwithEOW();
}

int main(){

    vector<string> dict = {"a" , "banana","app","appl","ap","apply","apple"};

    cout<<longestString(dict)<<endl;
    return 0;
}