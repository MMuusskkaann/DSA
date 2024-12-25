#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;

public:
  Graph(int V){
    this->V = V;
    l = new list<int>[V];
  }

void addedge(int u,int v){
    l[u].push_back(v);
    l[v].push_back(u);
  }

void print(){
    for(int u = 0 ; u < V ; u++){
        list<int> neighbor = l[u];
        cout<< u << " ";


    for(int v : neighbor){
        cout<<v << " ";
      }

    cout<<endl;
    }
  }

bool isBipartile(){
    queue<int> q;
    vector<bool> vis(V,false); // we can can't use the vis because we have a color vector
    vector<int> color(V,-1); //-1->means nothing

    q.push(0);
    color[0] = 0;
    vis[0] = 0;

    while(q.size()>0){
        int curr = q.front();
        q.pop();

        list<int> neighbor = l[curr];

        for(int v : neighbor){
            if(!vis[v]){   // we can use this also if(color[v] == -1) means => visited node
                vis[v] = true;

                color[v] = !color[curr];
                q.push(v);
            }

            else{
                if(color[v]== color[curr]){
                    return false;
                }
            }
        }
    }
   return true;
  }
};
int main(){

    Graph graph(5);

   graph.addedge(0,1);
   graph.addedge(0,2);
   graph.addedge(1,3);    
   graph.addedge(2,3);

   cout<<graph.isBipartile()<< endl;

    return 0;
}
