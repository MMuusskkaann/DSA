#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
using namespace std;

class Edge{

public:
   int V;  //destintion --> V
   int wt;

Edge(int V , int wt){
    this->V = V;
    this->wt = wt;   
 }
};

void dijkstra(int src,vector<vector<Edge>> graph , int V){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    //pair(dist[v] , v); stl in heap sorting on the basis of 1st perameter
    vector<int> dist(V,INT_FAST16_MAX);

    pq.push(make_pair(0,src));
    dist[src] = 0;

    while(pq.size() > 0){
        int u = pq.top().second;
        pq.pop();

    vector<Edge> edges = graph[u];
    for(Edge e : edges){ //e.V ,e.wt
       if(dist[e.V] > dist[u] + e.wt){
        dist[e.V] = dist[u] + e.wt;
        pq.push(make_pair(dist[e.V],e.V));
        }
      }
    }
    for(int d : dist){
        cout<< d << " ";
 }
    cout<<endl;
}

int main(){

    int V = 6;
    vector<vector<Edge>> graph(V);

    graph[0].push_back(Edge(1 ,2));  // stores edge ----> (distination,weight)
    graph[0].push_back(Edge(2, 4));

    graph[1].push_back(Edge(2, 1));
    graph[1].push_back(Edge(3, 7));

    graph[2].push_back(Edge(4, 3));

    graph[3].push_back(Edge(5, 1));

    graph[4].push_back(Edge(3, 2));
    graph[4].push_back(Edge(2, 5));  

    dijkstra(0, graph, V);  
    dijkstra(1, graph, V);
    dijkstra(2, graph, V);
    dijkstra(3, graph, V);
    dijkstra(4, graph, V);
    dijkstra(5, graph, V);
    
    return 0;
}