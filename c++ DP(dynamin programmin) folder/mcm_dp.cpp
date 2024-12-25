#include<iostream>
#include<vector>
using namespace std;

//Recursion function
int mcmRec(vector<int> array,int i, int j){ //return minimum cost


if(i == j){
    return 0;
}

int ans = INT16_MAX;

for(int k = i ; k<j ; k++){
    // (i,k)
       int cost1 = mcmRec(array,i,k);

    //(k+1, j)
    int cost2 = mcmRec(array, k+1 , j);
    

    // current partition cost
    int currCost = cost1 + cost2 + (array[i-1] * array[k] * array[j]);

    ans = min(ans, currCost);
}
return ans;

}


//Tabulaton function  TC ---> O(n^3)
int mcmTab(vector<int> array){
    int n = array.size();

    vector<vector<int>> dp(n,vector<int>(n,0));

    //initialization
    for(int i = 1 ; i<n ; i++){
        dp[i][i] =0; //initialization
    }

    //bottom yp manner fill
    for(int len = 2 ; len<n ;len++){
        for(int i = 1 ; i <= n-len ; i++){

            int j = i+len-1;
            dp[i][j] = INT16_MAX;

        for(int k = i ; k<j ; k++){
            int cost1 = dp[i][k];
            int cost2 = dp[k+1][j];

            int currcost = cost1 +cost2 + (array[i-1] * array[k] * array[j]);

            dp[i][j] = min(dp[i][j] ,currcost);
          }
        }
    }

    for(int i = 0 ; i<n; i++){
        for(int j = 0 ; j<n ; j++){
            cout<< dp[i][j] << " ";
        }

        cout<<endl;
    }

    return dp[1][n-1];
}


int main(){
    vector<int> array = {1, 2, 3, 4, 3};
    int n =  array.size();

    cout<< " Matrix chain multiplication by recursion = " << mcmRec(array,1,n-1) << endl; 
     cout<< " Matrix chain multiplication by Tabulation = " << mcmTab(array) << endl; 

    return 0;
    

}
