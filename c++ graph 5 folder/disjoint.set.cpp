#include<iostream>
#include<vector>
using namespace std;

class DisjointSet{
    public:
     int n;
     vector<int> parent;
     vector<int> rank;

     DisjointSet(int n){
        this->n = n;
        for(int i = 0 ; i < n ; i++){
            parent.push_back(i);
            rank.push_back(0);
        }
     }

int find(int x){
        if(parent[x] == x){
            return x;
        }

        // return find(parent[x]);

        //optimized way
        return parent[x] = find(parent[x]); //path compressions
     }

void unionByRank(int a , int b){
        int parentA = find(a);
        int parentB = find(b);

        if(rank[parentA] == rank[parentB]){
               parent[parentB] = parentA;
               rank[parentA]++;
        }

        else if(rank[parentA] > rank[parentB]){
            parent[parentB] = parentA;

        }
        else{
            parent[parentA] = parentB;
          }
    }

void getInfo(){
    for(int  i = 0 ; i < n ; i++){
        cout<<i << " : "<<parent[i] << " , " << rank[i] << endl;
    }
}
};

int main(){

    DisjointSet dj(6);
    dj.unionByRank(0, 2);
    cout<< dj.find(2) << endl;
    dj.unionByRank(1, 3);
    dj.unionByRank(2, 5);
    dj.unionByRank(0, 3);
    cout<< dj.find(2) << endl;
    dj.unionByRank(0, 4);

    dj.getInfo();

return 0;
}