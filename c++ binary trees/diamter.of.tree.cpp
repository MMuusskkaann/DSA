#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
public:
   int data;
   Node* left;
   Node* right;

   Node(int data){
    this->data = data;
    left=right=NULL;
   }
};

static int idx = -1;
Node* BuildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    Node* CurrentNode = new Node(nodes[idx]);
    CurrentNode->left = BuildTree(nodes);
    CurrentNode->right = BuildTree(nodes);

    return CurrentNode;
}

int Height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);

    int currentHeight = max(leftHeight,rightHeight)+1;
    return currentHeight;
}

int Diameter(Node* root){
    if(root == NULL){
        return 0;
    }  

    int currDia = Height(root->left) + Height(root->right) + 1; // O(n)
    int leftDia = Diameter(root->left);
    int rightDia  = Diameter(root->right);

    return max(currDia,max(leftDia,rightDia));

}
int main(){

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = BuildTree(nodes);

    cout << "Diameter : " << Diameter(root) << endl;
    return 0;
}