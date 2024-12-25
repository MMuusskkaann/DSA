#include<iostream>
#include<vector>
#include<string>
using namespace std;

int lcsRec(string str1 , string str2){

    if(str1.size() == 0 || str2.size() == 0){
        return 0;
    }

    int n = str1.size();
    int m = str2.size();

    if(str1[n-1] == str2[m-1]){
         return 1 + lcsRec(str1.substr(0,n-1),str2.substr(0,m-1));
    }

    else{
        int ans1 = lcsRec(str1.substr(0,n-1),str2);
        int ans2 = lcsRec(str1,str2.substr(0,m-1));

        return max(ans1, ans2);
    }
}

//Memoization function
int lcsMem(string str1 , string str2, vector<vector<int>> dp){// O(n*m)

    if(str1.size() == 0 || str2.size() == 0){
        return 0;
    }

    int n = str1.size();
    int m = str2.size();

    if(dp[n][m] != -1){
        return dp[n][m];
    }

    if(str1[n-1] == str2[m-1]){
         dp[m][n] =  1 + lcsMem(str1.substr(0,n-1),str2.substr(0,m-1),dp);
    }

    else{
        int ans1 = lcsMem(str1.substr(0,n-1),str2,dp);
        int ans2 = lcsMem(str1,str2.substr(0,m-1),dp);
        
        dp[n][m] = max(ans1, ans2);
    }

    return dp[n][m];
}

//Tabulation function

int lcsTab(string str1 , string str2){
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>> dp(n+1, vector<int>(m+1 ,0));

    for(int i = 1 ; i < n+1 ; i++){
        for(int j = 1 ;j < m+1 ; j++){
            if(str1[i-1] == str2[j-1]){
               dp[i][j] = dp[i-1][j-1] + 1;
            }

            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    } 

    cout<<"Tabulation matrix\n";

    for(int i = 0 ; i <= n ;  i++){
        for(int j = 0 ; j <= m ; j++){
           cout<<dp[i][j] << " ";
        }
        
        cout<<endl;
    }

    return dp[n][m];
}

int main(){

//   string str1 = "abcdge";
//   string str2 = "abedg";

   string str1 = "abcd";
  string str2 = "ace";

  int n = str1.size();
  int m = str2.size();

  cout<<"Length from recursion = " << lcsRec(str1,str2)<<endl;

  vector<vector<int>> dp(n+1,vector<int>(m+1, -1));
  cout<<"Length from Memoization = " << lcsRec(str1,str2)<<endl;

  cout<<"Length from Tabulation = " << lcsTab(str1,str2)<<endl;
  
    return 0;
}
