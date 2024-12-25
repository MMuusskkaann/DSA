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
    left=right=NULL;
   }
};

Node* buildBSTfromSorted(int array[],int st,int end){

    if(st>end){
        return NULL;
    }

    int mid = st + (end-st)/2;
    Node* curr= new Node(array[mid]);

   curr->left =  buildBSTfromSorted(array,st,mid-1);
   curr->right = buildBSTfromSorted(array,mid+1,end);

   return curr;

} 

void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main(){

    int array[7]={3,4,5,6,7,8,9};
    Node* root = buildBSTfromSorted(array,0,6);

    preorder(root);
    cout<<endl;
    return 0;
}