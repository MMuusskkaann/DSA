#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<pair<int,int>> *l; //int,int : neighbour + weight
    bool isundirected;

public:

 Graph(int V, bool isundirected = true){
    this->V = V;
    l = new list<pair<int,int>> [V];
    this->isundirected = isundirected;
 }
 void addEdge(int u, int v, int wt){ //undirected graph u---->v (weighted graph)
    l[u].push_back(make_pair(v,wt));
    if(isundirected){
        l[v].push_back(make_pair(u,wt));
    }
  }

void primsAlgo(int src){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
     //(wt,u) ----> min heap

     vector<bool> mst(V, false);

     pq.push(make_pair(0,src));
     int ans  = 0;

     while(pq.size() > 0){
        int u = pq.top().second;
        int cost = pq.top().first;

        pq.pop();

        if(!mst[u]){
            mst[u] = true;
            ans += cost;
            
            list<pair<int,int>> neighbor = l[u];
            for(pair<int ,int> n : neighbor){
                int v = n.first;
                int currwt = n.second;
                pq.push(make_pair(n.second , n.first));
            }
        }
     }
   cout<< "Final cost of MST = " << ans << endl;
}
};
int main(){

    // Prim's algorithm gralh
    Graph graph(4);


   graph.addEdge(0, 1, 10); //u,v,weight
   graph.addEdge(0, 2, 15);
   graph.addEdge(0, 3, 30);

   graph.addEdge(0, 3, 40);

   graph.addEdge(2, 3, 50);

   graph.primsAlgo(0);
    return 0;
}