#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

int LIS(vector<int> array1){

    unordered_set<int> s(array1.begin(),array1.end());  //more efficient way to extract unique element

    ////// first way to insert unique element in copy array
    // for(int el : array){
    //     s.insert(el);
    // }

    vector<int> array2(s.begin(),s.end()); //unique values

    sort(array2.begin(),array2.end()); //ascending order sorting  //O(nlogn)

    // LCS ==> LIS

    int n = array1.size();
    int m = array2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1 , 0));

    for(int i = 1 ; i< n+1 ; i++){ //O(n*n)
        for(int j = 1 ; j < m+1 ; j++){
            if(array1[i-1] == array2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1]; 
            }

            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}
int main(){

    vector<int> array1 = {50, 3, 10, 7,  40, 80};

    cout<< "Longest increasing subsequence = "<<LIS(array1) << endl;
    return 0;
}

