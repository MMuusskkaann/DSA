#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

void majorityElement(vector<int> nums){
    unordered_map<int,int> m;

    for(int i = 0 ; i<nums.size() ; i++){
        if(m.count(nums[i])){ //1 -> exists and 0 -> not exists
          m[nums[i]]++;
        }
        else{
            m[nums[i]] = 1;
        }
    }

    for(pair<int,int> p : m){
        if(p.second > nums.size()/3){
            cout<< p.first << " ";
        }
    }

    cout<<endl;

}

int main(){

    vector<int> nums = {1, 3, 2, 5, 1, 3, 1, 5, 1};
    vector<int> num2 = {1,2};

    majorityElement(num2);

    return 0;
}