#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findErrorNums(vector<int> &nums){
    int duplicate = -1,missing=1;

    sort(nums.begin(),nums.end());

    for(int i = 0 ; i< nums.size() ; i++){
        if(nums[i] == nums[i - 1]){
            duplicate = nums[i];
        }
        else if(nums[i] > nums[i - 1] +1){
            missing = nums[i - 1] + 1;
        }
    }

    //check for the last element
    if(nums[nums.size()-1] != nums.size()){
        missing = nums.size();
    }

    return {duplicate,missing};
}

int main(){

    vector<int>nums = {1,2,2,4};
    vector<int>result = findErrorNums(nums);

    cout << "Duplicate number : " <<result[0] << endl;
    cout << "Missing number : " << result[1] <<endl;


    return 0;
}