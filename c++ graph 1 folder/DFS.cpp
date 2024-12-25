#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>* l;

public:
  Graph(int V){
    this->V = V;
    l = new list<int> [V];
  }

void addEdge(int u ,int v){
    l[u].push_back(v);
    l[v].push_back(u);
 }

void print(){
    for(int u = 0 ; u<V ; u++){
        list<int> neighbour = l[u]; 
        cout<< u <<"-->";
    
    for(int v : neighbour){
        cout<< v << " ";
     }

     cout<<endl;
   }
 }

void DFS(int u ,vector<bool> &vis){ //O(V+E)
   vis[u] = true;
   cout<< u <<" ";

   list<int> neighbor = l[u];
   for(int v : neighbor){
    if(!vis[v]){
        DFS(v,vis);
     }
   }
}


//second way to write the DFS code
// ager yha declare ker diya toh vector main function mei nhi kerna padega 
void DFS(){
    vector<bool> vis(7,false);
    DFS(0,vis);
    cout<<endl;
}
};

int main(){

    Graph graph(7);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);

    graph.print();
    
    cout<< "----**----"<<endl;
    // vector<bool> vis(7,false);
    // graph.DFS(0,vis);
    graph.DFS();
    return 0;
}