#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<double,int> p1,pair<double,int> p2){
    return p1.first>p2.first; //descending on the basic of ratio

}
int fractionalKnapsack(vector<int> value, vector<int> wt, int weight){
   int n = value.size();
   vector<pair<double,int>> ratio(n,make_pair(0.0,0)); // pair(ration,idx) - >(double, int )

   for(int i = 0 ; i < n ; i++){
      double r =  value[i]/(double)wt[i];
      ratio[i] = make_pair(r,i); 
   }

   sort(ratio.begin(),ratio.end(),compare); //O(nlogn) //descending order
   
   int ans = 0;
   for(int i = 0 ; i < n ; i++){
     int idx = ratio[i].second; // gives the index of weight and value

     if(wt[i] <= weight){
       
       ans += value[idx];
       weight -= wt[idx];
     }

     else{
        ans += ratio[i].first * weight;
        weight = 0;
     }
   }
   cout<<"Maximum value  = " << ans<<endl;
   return ans;
}

int main(){

    vector<int> value = {60,100,120};
    vector<int> wt = {10,20,30}; //wt->weight of the value

    int weight = 50;

    fractionalKnapsack(value,wt,weight);
    return 0;
}