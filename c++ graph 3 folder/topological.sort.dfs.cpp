#include<iostream>
#include<list>
#include<vector>
#include<stack>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    bool isundirected;

public:
  Graph(int V , bool isundirected = true){
    this->V = V;
    l = new list<int>[V];
    this->isundirected = isundirected;
  }

void addEdge(int u , int v){
    l[u].push_back(v);
    if(isundirected){
        l[v].push_back(u);
    }
}

void print(){
    for(int u = 0 ; u<V ; u++){
        list<int> neighbour = l[u];
        cout<< u << " ";

        for(int v : neighbour){
            cout << v << " ";
        }
        cout << endl;
    }
}

void topohelper(int src , vector<bool> &vis, stack<int> &s){ // dfs
   vis[src] = true;

   list<int> neighbor = l[src];

   for(int v : neighbor){
    if(!vis[v]){
        topohelper(v,vis,s);
    }
   }
   s.push(src);

}

void topoSort(){ 
    vector<bool> vis(V,false);
    stack<int> s;

    for(int i = 0 ; i < V ; i++){
        if(!vis[i]){
            topohelper(i,vis,s);
        }
    }

    //print topological order
    while(s.size()>0){
        cout << s.top() << " ";
        s.pop();
    }
}

};

int main(){
   //DAG
    Graph graph(6,false);
    graph.addEdge(2,3);
    graph.addEdge(3,1);

    graph.addEdge(4,0);
    graph.addEdge(4,1);

    graph.addEdge(5,0);
    graph.addEdge(5,2);    

    graph.topoSort();
    return 0;
}