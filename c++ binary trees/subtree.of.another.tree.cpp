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

bool isIdentical(Node* root1,Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }

    else if(root1 == NULL || root2 == NULL){
        return false;
    }

    if(root1->data != root2->data){
        return false;
    }
    return isIdentical(root1->left,root2->left)
        && isIdentical(root1->right,root2->right);
}


bool isSubTree(Node* root, Node* subroot){
    if(root == NULL && subroot == NULL){
        return true;
    }

    else if(root == NULL || subroot == NULL){
        return false;
    }

    if(root->data == subroot->data){
        //identical for subtree

        if(isIdentical(root,subroot))
        return true;
    }

    int isLeftSubTree = isSubTree(root->left,subroot);

    if(!isLeftSubTree){
        return isSubTree(root->right,subroot);
    }
    return true;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 }; // return 1 -> true

    Node* root = buildTree(nodes);

    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);

    cout<< isSubTree(root,subroot)<<endl;
    return 0;
}