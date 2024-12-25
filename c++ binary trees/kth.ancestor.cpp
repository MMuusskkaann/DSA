#include<iostream>
#include<vector>
using namespace std;

class Node{
public:    
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left=right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]); //1
    currNode->left = buildTree(nodes); //2  left subtree
    currNode->right = buildTree(nodes); //3  right subtree

    return currNode;
}


int KthAncestor(Node* root,int node,int k){
    if(root == NULL){
        return -1;
    }

    if(root->data == node){
        return 0;
    }

    int leftdist = KthAncestor(root->left,node,k);
    int rightdist = KthAncestor(root->right,node,k);

    if(leftdist == -1 && rightdist == -1){
        return -1;
    }

    int validvalue = leftdist == -1 ? rightdist : leftdist; 

    if(validvalue+1 == k){
        cout << "Kth Ancestor = "<<root->data << endl;
    }

    return validvalue+1;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = buildTree(nodes);

    // int node = 5 ,k = 2;
    int node = 6 ,k = 1;

    KthAncestor(root,node,k);

    return 0;
}