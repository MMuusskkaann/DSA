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
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL; 
    }

    Node* currentNode = new Node(nodes[idx]);
    currentNode->left = buildTree(nodes);
    currentNode->right = buildTree(nodes);

    return currentNode; 
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    int currentheight = max(leftHeight,rightHeight) + 1;

    return currentheight;

}
int main(){

    // vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
    vector<int> nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};

    Node* root = buildTree(nodes);

    cout << "Height : "<<height(root) << endl;
    return 0;
}