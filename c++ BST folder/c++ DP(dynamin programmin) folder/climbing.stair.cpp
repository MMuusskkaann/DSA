
#include<iostream>
#include<vector>
using namespace std;

int countWays(int n){
    if( n == 0 || n ==1 ){
        return 1;
    }

    return countWays(n-1) + countWays(n-2);
}


//memoization function
int countWaysMem(int n, vector<int> &dp){//O(n)
    if(n == 0 || n ==1){
        return 1;
    }
    

    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = countWaysMem(n-1, dp) + countWaysMem(n-2, dp);
    return dp[n];
}

//Tabulation function
int countWaysTab(int n){//O(n)
    vector<int> dp(n+1, 0);

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2 ; i<= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
     
    return dp[n];
}

int main(){
    int n = 5;
    vector<int> dp(n+1 , -1);
    cout<< "Count = " <<countWaysMem(n, dp) << endl;
    cout<< "Count = " <<countWaysTab(n) << endl;
    return 0;
}