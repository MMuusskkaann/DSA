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


Node* LCA2(Node* root,int n1,int n2){ //tc->O(n) , TC->O(1)

    if(root == NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }

    Node* leftLCA = LCA2(root->left,n1,n2);
    Node* rightLCA = LCA2(root->right,n1,n2);

    if(leftLCA!=NULL && rightLCA!=NULL){
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;

 }

int main(){                                                      
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = buildTree(nodes);
    
    int n1 = 3,n2 = 6;

    cout << "LCA2 = " << LCA2(root,n1,n2)->data <<endl;
    return 0;
}