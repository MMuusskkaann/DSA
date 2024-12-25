#include<iostream>
using namespace std;


int calculateMax(int *heights,int n){
    if ( n<= 1){
        return 0;
    }
    int leftMax[n],rightMax[n];

     leftMax[0] = heights[0];
     rightMax[n-1] = heights[n-1];
    
    for(int i = 1 ; i<n ; i++){
        leftMax[i] = max(leftMax[i-1],heights[i]); 

        // cout << leftMax[i] << ",";
    }
    // cout << endl;

    // cout << "-----------------";

    // cout << endl;
   
    for (int i = n-2 ; i>=0 ; i--){
        rightMax[i] = max(rightMax[i+1],heights[i]);

        // cout << rightMax[i] << ",";
    }

    int watertrapped = 0;
    for(int i = 0 ; i<n ; i++){
            int currwater = min(leftMax[i],rightMax[i]) - heights[i];

            if(currwater > 0){
                watertrapped += currwater;
            }
    } 
    return watertrapped;

}
int main(){
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
    
   cout << "Water trapped = "  << calculateMax(heights,n);
    return 0;

}