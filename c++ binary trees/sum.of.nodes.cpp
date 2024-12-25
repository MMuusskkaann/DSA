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

int sum(Node* root){
    if(root == NULL){
       return 0;
    }

    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    
    // for printing the values and checks our recursion is correct or not
    int currentsum = leftsum+rightsum+root->data;

    cout << "Current sum = " << currentsum << endl;
    return currentsum;
    // return leftsum+rightsum+root->data;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = buildTree(nodes);

    cout << "SUM of Nodes = " << sum(root)<<endl;
    return 0;
}