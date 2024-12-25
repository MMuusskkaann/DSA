#include<iostream>
using namespace std;


void maxProfit(int *prices,int n){
    int bestBuy[100000];
    bestBuy[0] = INT8_MAX;

   for(int i = 1 ; i <n ; i++){
    bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
    // cout << bestBuy[i] << ",";
   }

   int maxProfit  = 0;
   for(int i = 0 ; i<n ; i++){
    int currProfit = prices[i] - bestBuy[i];
    maxProfit = max(maxProfit , currProfit); 
   }

   // O(n + n) = O(2n) = O(n)
   cout << "max profit value = "  << maxProfit << endl;
}
int main(){

    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);
    
    maxProfit(prices,n);
    return 0;
}