
#include<iostream>
#include<vector>
#include<queue>
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

void levelorder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);

    while(!Q.empty()){
        Node* current = Q.front();
        Q.pop();
        
        if(current==NULL){
            cout<<endl;
            if(Q.empty()){
                break;
            }

        Q.push(NULL); // to track next line
        }

        else{
        cout<<current->data<<" ";
        if(current->left != NULL){
            Q.push(current->left);
        }
        
        if(current->right != NULL){
            Q.push(current->right);
        }
    }
}

    // cout<<endl;

}

//function to calculate the value of the transform the sum of the nodes

int Transform(Node* root){ // time complexity->O(n)
    if(root == NULL){
        return 0;
    }

    int leftold = Transform(root->left);
    int rightold = Transform(root->right);

    int currold = root->data;

    root->data = leftold + rightold;

    if(root->left != NULL){
      root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data += root->right->data;
    }

    return currold;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = buildTree(nodes);

    Transform(root);
    levelorder(root);
    return 0;
}