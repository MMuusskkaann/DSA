#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int knapsackRec(vector<int> val, vector<int> wt,int w, int n){ //O(2^n)

    if(n == 0  || w ==0){
        return 0;
    }
    int itemWt = wt[n-1];
    int itemVal = val[n-1]; 

    if(itemWt <= w){ //valid weight condition
    //include
     int ans1 = knapsackRec(val,wt,w-itemWt,n-1) + itemVal;

    //exclude
    int ans2 = knapsackRec(val,wt, w, n-1);

    return max(ans1,ans2);
    }

    else{
        //exclude
        return knapsackRec(val,wt,w,n-1);
    }
}

//Memoization function

int knapsackMem(vector<int> val, vector<int> wt,int w, int n, vector<vector<int>> &dp){ 

    if(n == 0  || w ==0){
        return 0;
    }

    if(dp[n][w] != -1){
        return dp[n][w];
    }   


    int itemWt = wt[n-1];
    int itemVal = val[n-1]; 

    if(itemWt <= w){ //valid weight condition
    //include
     int ans1 = knapsackMem(val,wt,w-itemWt,n-1, dp) + itemVal;

    //exclude
    int ans2 = knapsackMem(val,wt, w, n-1, dp);

    dp[n][w] =  max(ans1,ans2);
    }

    else{
        //exclude
        dp[n][w]= knapsackMem(val,wt,w,n-1, dp);
    }

    return dp[n][w];
}

// tabulation function 
int knapsackTab(vector<int> val,vector<int> wt, int w, int n){ //O(n*w)
    vector<vector<int>> dp(n+1, vector<int>(w+1 , 0));

    for(int i = 1 ; i< n+1 ; i++){
        for(int j = 1 ; j< w+1 ; j++){
            int itemwt = wt[i-1];
            int itemval = val[i-1];

            if(itemwt <= j){
                dp[i][j] = max(itemval + dp[i-1][j-itemwt] , dp[i-1][j]);
            }

            else{
             dp[i][j] = dp[i-1][j];
           }
        }
    }

    cout<<"Tabulation matrix" <<endl;
    for(int i = 0; i < n+1 ; i++){
        for(int j = 0 ; j < w+1 ; j++){
            cout<< dp[i][j]<<" ";
        }
       cout<<endl;
    }

    return dp[n][w];
}

int main(){

    vector<int> val = { 15, 14, 10, 45, 30};
    vector<int> wt = {2, 5, 1, 3, 4};

    int w = 7;
    int n = 5;

    cout<<"Max profit = " << knapsackRec(val,wt,w,n) <<endl;

    vector<vector<int>> dp(n+1 , vector<int> (w+1 , -1)); //2-D vector -1 --->answer is not calculated
    cout<< "Max profit from Memoization = " << knapsackMem(val, wt, w, n ,dp)<< endl;

    cout<< " Mamoization matrix \n";
    for(int i = 0 ; i < n+1 ; i++){
        for(int j = 0 ; j < w+1 ; j++){
            cout<<dp[i][j]  << " ";
        }
        cout << endl;
    }

    cout<< "Max profit from Tabulation = " << knapsackTab(val, wt, w, n);

    return 0;
}