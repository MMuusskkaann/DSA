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

Node* LCA2(Node* root , int n1,int n2){
    
    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
       return root;
    }

    Node* leftLCA2 = LCA2(root->left,n1,n2);
    Node* rightLCA2 = LCA2(root->right,n1,n2);

    if(leftLCA2!=NULL && rightLCA2!=NULL){
        return root;
    }


    return leftLCA2 == NULL ? rightLCA2 : leftLCA2;

}

//calculates distance
int Distance(Node* root,int n){
    if(root == NULL){
        return -1;
    }

    if(root->data == n){
        return 0;
    }

    int leftdist = Distance(root->left,n);
    if(leftdist != -1){
        return leftdist+1;
    }

    int rightdist = Distance(root->right,n);
    if(rightdist != -1){
       return rightdist+1;
    }

    return -1;
    
}


int minDistance(Node* root,int n1, int n2){
    Node* LCA = LCA2(root, n1,n2);

    int distance1 = Distance(LCA,n1);
    int distance2 = Distance(LCA,n2);

    return distance1+distance2;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = buildTree(nodes);
    int n1 = 4,n2 = 6;

    cout << "Min distance = "<<minDistance(root,n1,n2)<<endl;  
    return 0;
}