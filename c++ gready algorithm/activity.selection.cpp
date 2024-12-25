#include<iostream>
#include<vector>
using namespace std;

int maxActivity(vector<int> start , vector<int> end){
    // sort on end time -> already is given in question
    //A0 select
    
    cout << "Selecting A0 \n";
    int count = 1;
    int currentEndTime = end[0];

    for(int i = 1 ; i< start.size() ; i++){
        if(start[i]>=currentEndTime){ // non overlapping
           cout << "selecting A" << i << endl;
           count++;
           currentEndTime=end[i];
        }
    }
    return count;
}
int main(){

    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,6,7,9,9};  //ans = 4

    cout << maxActivity(start,end)<<endl;
    return 0;
}