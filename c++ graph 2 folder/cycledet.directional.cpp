#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int>* l;

    bool isundirected;

public:
  Graph(int V,bool isundirected = true){
    this->V = V;
    l = new list<int>[V];
    this->isundirected = isundirected; //undirected graph condition
  }

void addedge(int u, int v){  //u-->v
    l[u].push_back(v); // yhi hoha u->v ko add kerenge

    if(isundirected){  // false
    l[v].push_back(u); // v->u ander u ko add nhi kerenge
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

bool directedcyclehelper(int src,vector<bool> &vis, vector<bool> &recpath){
    vis[src] = true;
    recpath[src] = true;

    list<int> neighbor = l[src];
    for(int v : neighbor){
        if(!vis[v]){
            if(directedcyclehelper(v,vis,recpath)){
            return true;
        }
    }
        else{
            if(recpath[v]){
                return true;
            }
        }
    }

    recpath[src] = false;
    return false;
}

bool iscycledirec(){
    vector<bool> vis(V,false);
    vector<bool> recpath(V,false);

    for(int i = 0 ; i < V ; i++){
        if(!vis[i]){
            if(directedcyclehelper(i,vis,recpath)){
                return true;
            }
        }
    }
    return false; // connected component kei liya change isse kerte hei
}
};

int main(){
    // directed graph
    Graph graph(4,false);
    graph.addedge(1,0);
    graph.addedge(0,2);
    graph.addedge(2,3);
    // graph.addedge(3,0);
   

    cout<<graph.iscycledirec()<<endl;

    return 0;
}