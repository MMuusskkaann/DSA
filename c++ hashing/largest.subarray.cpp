#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int largestSubArray(vector<int> arr){
    unordered_map<int, int> m;
    int sum = 0 ;
    int ans= 0;

    for(int j = 0 ; j <arr.size(); j++){
        sum+=arr[j];

        if(m.count(sum)){
            int len = j-m[sum]; // current length
            ans = max(ans,len);
        }
        else{
            m[sum] = j ;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {15,-2,2,-8,1,7,10};

    cout<<"Largest sum arry = " <<  largestSubArray(arr)<< endl;
    return 0;
}