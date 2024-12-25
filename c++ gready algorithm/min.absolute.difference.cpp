#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> A = {4, 1, 8, 7};
    vector<int> B = {2, 3, 6, 5};

    // vector<int> A = {1,2,3};
    // vector<int> B = {3,1,2};

    sort(A.begin(),A.end()); // sort in ascending order
    sort(B.begin(),B.end()); // sort in ascending order

    int absoluteDiff = 0;

    for(int i = 0 ; i<A.size() ; i++){
        absoluteDiff += abs(A[i] - B[i]); // absolute function
    }
    cout << "Min absolute difference = " << absoluteDiff << endl; 
    return 0;
}