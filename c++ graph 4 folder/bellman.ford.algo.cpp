#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Edge{
public:
    int V;
    int wt;

Edge(int V,int wt){
    this-> V = V;
    this->wt = wt;
}
};

void bellmanFord(vector<vector<Edge>> graph, int V ,int src){  //O(V.E)
     vector<int> dist(V, INT_FAST16_MAX);
     dist[src] = 0;

     for(int i = 0 ; i< V-1 ; i++){//V
        for(int u = 0 ; u < V ; u++){//E
            for(Edge e : graph[u]){
                if(dist[e.V] > dist[u] + e.wt){
                    dist[e.V] = dist[u] +e.wt;
                }
            }
        }
     }

     for(int i = 0 ;  i <V ; i++){
        cout<< dist[i] << "  ";
     }

     cout<<endl;
}

int main(){

    //Bellman ford graph
    int V = 5;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, -4 ));

    graph[2].push_back(Edge(3, 2));

    graph[3].push_back(Edge(4, 4));

    graph[4].push_back(Edge(1, -1));

    bellmanFord(graph,V,0);
    bellmanFord(graph,V,4);

    return 0;

}