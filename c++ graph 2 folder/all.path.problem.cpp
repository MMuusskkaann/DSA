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

void pathHelper(int src, int dest,vector<bool> &vis,string path){
    if(src==dest){
        cout<<path<<dest<<endl;;
        return;
    }

    vis[src] = true;
    // path.push_back(src); not a right way to add string eith integer
    path += to_string(src);

    list<int> neighbor = l[src];

    for(int v : neighbor){
        if(!vis[v]){  //same bercah kei liya ,cycle mei na fss jai/prevent cycle
            pathHelper(v,dest,vis,path);
        }
    }

    path = path.substr(0,path.size()-1);
    vis[src] = false;  //helps to create a multiple level

}

void printAllPath(int src,int dest){
    vector<bool> vis(V,false);
    string path= " ";
    pathHelper(src,dest,vis,path);

 }
};

int main(){
    // directed graph
    Graph graph(6,false);
    graph.addedge(0,3);
    graph.addedge(2,3);
    graph.addedge(3,1);
    graph.addedge(4,0);
    graph.addedge(4,1);
    graph.addedge(5,0);
    graph.addedge(5,2);

    graph.printAllPath(5,1);
  

    return 0;
}