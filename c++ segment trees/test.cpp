#include<iostream>
#include<vector>
using namespace std;

class SegmentTree{
    vector<int> tree;
    int n;

    void buildTree(vector<int> &arr, int start, int end, int node) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = start + (end - start) / 2;
        buildTree(arr, start, mid, 2 * node + 1);
        buildTree(arr, mid + 1, end, 2 * node + 2);
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
//range sum function

int rangeSum(int qi, int qj,int si,int sj, int node){

    //no overlap case
    if(qj < si || qi > sj){
    return 0;
    }
    

    //overlapping condition
    if(si >= qi && sj <= qj){
        return tree[node];
    }

    //partial overlapping condition
     int mid = si + (sj-si) /2;

     return rangeSum(qi,qj,si,mid,2*node+1) + rangeSum(qi, qj, mid+1, sj, 2*node+2);
}

void updateUtil(int idx, int val, int st, int end, int node){

    if(st == end){
        tree[node]= val;
        return;
    }
    int mid = st + (end - st)/2;

    if(idx >=st && idx <= mid){
        updateUtil(idx, val, st,mid,2*node+1);//call for left
    }
    else{//right
       updateUtil(idx, val, mid+1,end, 2*node+2);
    }

    tree[node] = tree[2*node+1] +tree[2*node+2];
}

public:
    SegmentTree(vector<int> &arr) {
        n = arr.size();
        tree.resize(4 * n);
        buildTree(arr, 0, n - 1, 0);
    }
   
void printTree() {
    for (size_t i = 0; i < tree.size(); i++) {
        cout << tree[i] << " ";
    }
    cout << endl;
 }

//Query range function
 int queryRange(int qi,int qj){
    return rangeSum(qi, qj,0 , n-1,0); //privetae function
 }

void updatequery(int idx, int val) {
        updateUtil(idx, val, 0, n - 1, 0);
    }
};

int main(){
    //range sum queries
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8};

    SegmentTree st(array);
    st.printTree();

    cout << st.queryRange(2,5) << endl;
    cout << st.queryRange(0,3) << endl;
    cout << st.queryRange(6,7) << endl;

    st.updatequery(1,3);

    cout << st.queryRange(0,3) << endl; //11
    
   
    return 0;
}