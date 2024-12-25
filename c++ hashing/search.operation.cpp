#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node {
public:
    string key;
    int val;
    Node* next;

    Node(string key, int val) {
        this->key = key;
        this->val = val;
        next = nullptr;
    }

    ~Node() {
        if (next != nullptr) {
            delete next;
        }
    }
};

class Hashtable {

    int totalsize;
    int currsize;
    Node** table;

    int Hashfunction(string key) {
        int idx = 0;
        for (int i = 0; i < key.size(); i++) {
            idx = (idx + (key[i] * key[i])) % totalsize;
        }
        return idx;
    }

    void rehash() {
        Node** oldtable = table;
        int oldsize = totalsize;

        totalsize = 2 * totalsize;
        table = new Node*[totalsize];

        for (int i = 0; i < totalsize; i++) {
            table[i] = nullptr;
        }

        for (int i = 0; i < oldsize; i++) {
            Node* temp = oldtable[i];
            while (temp != nullptr) {
                inserting(temp->key, temp->val);
                temp = temp->next;
            }

            if (oldtable[i] != nullptr) {
                delete oldtable[i];
            }
        }

        delete[] oldtable;
    }

public:
    Hashtable(int size = 5) {
        totalsize = size;
        currsize = 0;
        table = new Node*[totalsize];

        for (int i = 0; i < totalsize; i++) {
            table[i] = nullptr;
        }
    }

    void inserting(string key, int val) {
        int idx = Hashfunction(key);
        Node* newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode;

        currsize++;

        double lambda = currsize / (double)totalsize;
        if (lambda > 1) {
            rehash();
        }
    }
  bool exist(string key) {
        int idx = Hashfunction(key);
        Node* temp = table[idx];
        while (temp != nullptr) {
            if (temp->key == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int search(string key) {
        int idx = Hashfunction(key);
        Node* temp = table[idx];
        while (temp != nullptr) {
            if (temp->key == key) {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }

    void remove(string key) {
        int idx = Hashfunction(key);

        Node* temp = table[idx];
        Node* prev = temp;
        while(temp != NULL){
            if(temp->key == key){
                if(prev == temp){
                    table[idx] = temp->next;
                }

                else{
                    prev->next = temp->next;
                }

                break;

            }
            prev = temp;
            temp = temp->next;
        }

    }

   void Print(){

    for(int i = 0 ; i < totalsize ; i++){
        cout<< " idx " << i << "->";
        Node* temp = table[i];

        while(temp != NULL){
            cout << "("<<temp->key << "," << temp->val << ")" << "->";
            temp = temp->next;

        }
        cout<<endl;
    }
  }
};

int main() {
    Hashtable ht;

    ht.inserting("India", 150);
    ht.inserting("China", 150);
    ht.inserting("US", 50);
    ht.inserting("Nepal", 10);
    ht.inserting("UK", 20);

    // if (ht.exist("India")) {
    //     cout << "India population: " << ht.search("India") << endl;
    // }
      ht.remove("China");
      ht.Print();

      cout<<"-*-*-*-*-\n";

      ht.remove("UK");
      ht.Print();
    return 0;
}