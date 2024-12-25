#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec1(10,-1);
    // cout << vec1.size() <<"\n";

    // for(int i = 0 ;i<vec1.size() ; i++){
    //     cout << vec1[i] << " ";
    // }

    vector<int>vec1 = {1,2,3,4};
    cout << "size : " << vec1.size() << endl; //4
    cout << "capacity : " << vec1.capacity() << endl; // 4

    vec1.push_back(5);
    cout << "size : " << vec1.size() << endl; //5
    cout << "capacity : " << vec1.capacity() << endl; // doubles the previous capacity 8

    vec1.pop_back();
    cout << "size : " << vec1.size() << endl;
    cout << "capacity : " << vec1.capacity() << endl; // capacity can't change only change the size
    
    return 0;
}