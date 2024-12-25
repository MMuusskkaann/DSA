#include<iostream>
#include<vector>
using namespace std;

int gridways(int r , int c ,int m ,int n ,string ans){
    if(r==m -1&& c==n-1){  //base case for destination
        cout << ans << "\n";
        return 1;
    }

    if(r>=m || c>=n){
        return 0;
    }

    // right
    int v1 = gridways(r , c+1,m,n,ans+"R");
  
    // down
    int v2 = gridways(r+1,c,m,n,ans+"D");
    return v1+v2;
}
int main(){
    int n = 3;
    int m = 3;
    string ans = "";

    cout << gridways(0,0,n,m,ans);
    return 0;
}