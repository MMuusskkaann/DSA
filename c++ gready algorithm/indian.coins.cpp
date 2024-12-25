#include<iostream>
#include<vector>
using namespace std;

int getChange(vector<int> coins,int value){
   int ans = 0;
   int  n= coins.size();
   for(int i= n- 1 ; i>= 0 && value>0 ; i--){
    if(value >= coins[i]){
        ans += value/coins[i];
        value = value%coins[i];
    }
  }
  
  cout << "MIN coins for change = " << ans << endl;
  return ans;
}

int main(){

    vector<int> coins = {1,2,5,10,20,50,100,500,2000};
    // int value = 1099;
    int value;
    cout<<"Enter value = ";
    cin>>value;

    getChange(coins,value);
    return 0;
}

