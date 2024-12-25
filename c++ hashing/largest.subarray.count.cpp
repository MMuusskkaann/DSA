#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraycount(vector<int> array ,int k){ //sum[i,j] = sum[j] - sum[i]
    unordered_map<int,int> m; //sum,count
    m[0] = 1;
    int sum = 0;
    int count = 0;

    for(int i = 0 ; i < array.size() ;i++){
        sum+=array[i];

        if(m.count(sum-k)){
            count+= m[sum-k];
        }

        if(m.count(sum)){
            m[sum]++;
        }

        else{
            m[sum]= 1;
        }
    }

    return count;
}

int main(){

    vector<int> array ={10, 2, -2, -20, 10};
    int k = -10;

    cout<<"Sum = " << subarraycount(array,k) << endl;
    return 0;
}