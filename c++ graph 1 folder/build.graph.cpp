#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V; //total numner of vertex
    list<int> * l; //stores differnt different list of integer

public: 
   Graph(int V){
    this->V = V;
    l = new list<int> [V];

    // we can alseo use this at the place of list 
    // int * arr;
    // arr = new int[V]
   }

   void addEdge(int u , int v){ // u----> edge exists
       l[u].push_back(v); //adding u's neighbour in v's neighbour
       l[v].push_back(u); // addding v's neighbour in u's neighbour

   }


   void print(){
     for(int u = 0 ; u<V ; u++){ //0,1,2,3,4
        list<int> neighbors = l[u];  //find neighbous
        cout<< u << " : ";
        for(int v : neighbors){ //print neighbours
            cout << v <<" ";
        }
        cout<<endl;
     }
   }
};

int main(){

    Graph graph(5);
    

    //undirected graph    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    graph.print();

    return 0;
}