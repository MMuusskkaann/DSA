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

void printRange(Node* root, int start , int end){

    if(root==NULL){
        return;
    }

    // case 1 -> root ka data lie kerta hei range kei beech mei
    if(start<=root->data && root->data<=end){
      printRange(root->left,start,end); // phle isliya call lagainge subtree ko taki inorder sequence -> sorted sequence mei print ho ske values
      cout<<root->data<<" ";
    //   printRange(root->left,start,end);  // isse soted sequence mei nhi print hoge
      printRange(root->right,start,end);
    }

    //case 2 -> root < start

    else if(root->data < start){
        printRange(root->right,start,end);
    }

    // case 3 - > root->data > end
    else{
        printRange(root->left,start,end);
    }
}
int main(){
    // int array[6] = {5, 1, 3, 4, 2, 7};
    int array2[9] = {8,5,3,1,4,6,10,11,14};

    Node* root = BuildBST(array2,9);

    // printRange(root,5,12);
    printRange(root,1,6);
    cout<<endl;
    return 0;
}