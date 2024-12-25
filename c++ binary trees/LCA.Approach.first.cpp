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


//interview question to ask direstly calculate the path
bool RootToNodePath(Node* root,int n, vector<int> &path){ //O(n)
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);

    if(root->data == n){
        return true;
    }

    int leftPath = RootToNodePath(root->left,n,path);
    int rightPath = RootToNodePath(root->right,n,path);

    if(leftPath || rightPath){
        return true;
    }

    path.pop_back();
    return false;
}



int LCA(Node* root, int n1, int n2){ //O(n)
    vector<int> path1;
    vector<int> path2;

    RootToNodePath(root,n1,path1);
    RootToNodePath(root,n2,path2);

    int lca = -1;
    for(int i = 0 ,j=0; i<path1.size() && j<path2.size();i++,j++){
        if(path1[i] != path2[j]){
          return lca;
        }
        lca = path1[i];
    }
   return lca;
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };

    Node* root = buildTree(nodes);

    int n1 = 4, n2 = 3;

    cout << "Lowest common ancestor = " << LCA(root,n1,n2) << endl;

    return 0;
}