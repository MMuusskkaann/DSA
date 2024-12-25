#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    bool undirected;

public:
  Graph(int V , bool undirected = true){
    this->V = V;
    l = new list<int> [V];
    this->undirected = undirected;
  }

void addedge(int u,int v){
    l[u].push_back(v);
    
    if(undirected){
        l[v].push_back(u);
    }
}

void print(){
    for(int u = 0 ; u < V ; u++){
        list<int> neighbor = l[u];
        cout<< u << " ";

        for(int v : neighbor){
            cout<<v << " ";
        }
        cout << endl;
    }
  }

void calculatingIndegree(vector<int> &indegree){
    for(int u = 0 ; u < V ; u++){
        list<int> neighbor = l[u];

        for(int v : neighbor){//u---->v
           indegree[v]++;
        }

    }
}

void topologicalsort2(){ //kahn's algo
   vector<int> indegree(V,0);
   calculatingIndegree(indegree); //calculates all the indegree
   
   queue<int> q;
   //0 indegree node --> starting point
   for(int i = 0 ; i < V ; i++){
    if(indegree[i] == 0){
        q.push(i);
    }
   }

   while(q.size() > 0){
    int curr = q.front();
    q.pop();
    cout << curr << "  ";

    list<int> neighbor = l[curr];

    for(int v : neighbor){
           indegree[v]--;
           if(indegree[v] == 0){ // no pending dependencies
                  q.push(v);
           }
       }
   }

   cout << endl;
}

};
int main(){

    //DAG
    Graph graph(6,false);
    graph.addedge(2, 3);
    graph.addedge(3, 1);

    graph.addedge(4, 0);
    graph.addedge(4, 1);

    graph.addedge(5, 0);
    graph.addedge(5, 2);

    graph.topologicalsort2();


    return 0;
}
