#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<string>
using namespace std;

class Graph{
    int V;
    list<int>* l;

public:
  Graph(int V){
    this->V = V;
    l = new list<int> [V];
  }

void addEdge(int u, int v){
    l[u].push_back(v);
    l[v].push_back(u);
}

void print(){
    for(int u = 0 ; u<V; u++){
        list<int> neighbor = l[u];
        cout<<u<<" ";
        for(int v : neighbor){
           cout<<v<<" ";
        }
        cout<<endl;
    }
  }

bool undiCycleHelper(int src,int par,vector<bool> &vis){ //par>parent
   vis[src] = true;

   list<int> neighbor = l[src];

   for(int v : neighbor){
    if(!vis[v]){
       if(undiCycleHelper(v , src,vis)){
        return true;
       }
    }
    else{
        if(v!=par){
            return true;
        }
    }
  }
   return false;
}  
bool isCycleUndi(){
   vector<bool> vis(V,false);
   return undiCycleHelper(0, -1, vis);
}
};

int main(){

    int V = 5;
    Graph graph(V);

    graph.addEdge(0, 1);
    // graph.addEdge(0, 2);
    graph.addEdge(0, 3);
    graph.addEdge(1, 2);
    graph.addEdge(3, 4);

    cout<<graph.isCycleUndi()<<endl;

    return 0;
}
