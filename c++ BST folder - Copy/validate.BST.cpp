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

Node* insert(Node* root, int val){ //O(logn)
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    else if(val< root->data){
        root->left = insert(root->left,val);
    }

    else{
        root->right = insert(root->right,val);
    }

   return root;
}


Node* BuildBST(int array[], int n){
   Node* root = NULL;

   for(int i = 0 ; i<n ; i++){
      root = insert(root,array[i]);
   }

   return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

//helper function
bool validateHelper(Node* root, Node* min,Node* max){
    if(root==NULL){
        return true;
    }

    if(min!=NULL && root->data < min->data){
        return false;
    }

    if(max!=NULL && root->data > max->data){
        return false;
    }

    return validateHelper(root->left,min,root)
    && validateHelper(root->right,root,max);

}
//function for validate bst
bool ValidateBST(Node* root){
    return validateHelper(root,NULL,NULL);
}

int main(){
    // int array[6] = {5, 1, 3, 4, 2, 7};
    int array[9] = {8,5,3,1,4,6,10,11,14};

    Node* root = BuildBST(array,9);
    root->data = 15;
    cout << ValidateBST(root) << endl;
    return 0;
}