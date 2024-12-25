#include<iostream>
#include<list>
#include<vector>
using namespace std;

class Graph{
    int V;
    list<int>* l;

public:
  Graph(int V){
    this->V = V;
    l = new list<int> [V];
  }

void addEdge(int u,int v){
    l[u].push_back(v);
    l[v].push_back(u);
 }

void print(){
    for(int u = 0 ; u < V ; u++){
        list<int> neighbour =  l[u];
        cout<< u << "-->";

    for(int v : neighbour){
        cout<<v << " ";
    }

        cout<<endl;
    }
  }

void DFShelper(int u, vector<bool> &vis){

    cout<<u<<" ";
    vis[u] = true;
    list<int> neighbour = l[u];
    for(int v : neighbour){
        if(!vis[v]){
            DFShelper(v,vis);
        }
    }
}

// void DFS(){
//     vector<bool> vis(V,false);
//             DFShelper(0,vis);
//             cout<<endl;  
//   }
// };

void DFS(){
    vector<bool> vis(V,false);
    for(int i = 0 ; i < V ; i++){
        if(!vis[i]){
            DFShelper(i,vis);
        }
    }
}
};

int main(){

    Graph graph1(10);
    
    graph1.addEdge(0,2);
    graph1.addEdge(2,5);

    cout<<endl;

   graph1.addEdge(1,6);
   graph1.addEdge(6,4);
   graph1.addEdge(4,3);
   graph1.addEdge(3,7);
   graph1.addEdge(3,8);
   graph1.addEdge(4,9); 
    // graph1.print();
    // cout<<endl;

    graph1.DFS();
    cout<<endl;
    graph1.DFS();


    return 0;
}
