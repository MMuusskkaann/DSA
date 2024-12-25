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
int main(){
    vector<int> array = {1, 2, 3, 4, 3};
    int n =  array.size();

    cout<< " Matrix chain multiplication by recursion = " << mcmRec(array,1,n-1) << endl; 

    return 0;
    

}
