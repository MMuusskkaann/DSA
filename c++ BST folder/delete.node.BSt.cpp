#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node*left;
    Node* right;

    Node(int data){
        this->data = data;
        left=right = NULL;
    }
};

//insert function
Node* insert(Node* root,int val){
    if(root==NULL){
        root = new Node(val);
    }
    else if(root->data > val){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}

// creting bst
Node* BuildBST(int array[],int n){
    Node* root = NULL;

    for(int i = 0; i < n;i++){
        root = insert(root,array[i]);
    }

    return root;
}


//inorder function
void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//inorder successor function

Node* getInorderSuccessor(Node* root){
    while(root->left != NULL){
     root = root->left;
    }
    return root;
}

//deletion function

Node* delNode(Node* root , int val){
   if(root == NULL){
    return NULL;
   }

   if(val < root->data){
    root->left=delNode(root->left,val);
   }

   else if(val > root->data){
    root->right = delNode(root->right,val);
   }

   else{
    // root==val
    // case 1 -> 0 chil case
    if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
    }

    // case 2-> 1 child case
    if(root->left == NULL || root->right == NULL){
        Node* temp = root->left==NULL ? root->right : root->left;
        delete root;
        return temp;
    }

    // case 3 -> 2 children
    Node* IS = getInorderSuccessor(root->right);
    root->data = IS->data;
    root->right = delNode(root->right,IS->data);
    return root;
   }
   return root;
}
int main(){

    int array2[9] = {8,5,3,1,4,6,10,11,14};

    Node* root = BuildBST(array2,9);
    
    inorder(root);
    cout<<endl;

    // delNode(root,4);
    // delNode(root,10);
    delNode(root,5);

    inorder(root);
    cout<<endl;

    return 0;
}