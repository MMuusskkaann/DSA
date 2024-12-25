#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solvemazeutil(int maze[4][4] , int x, int y , string sol ,int n, vector<vector<bool>> vis){
    if(x == n - 1 && y == n-1 && maze[x][y]==1){
        cout << sol << "\n";
        return ;
    }

     
     //up

     if(x -1 >=0 && !vis[x-1][y] && maze[x-1][y] == 1){
        vis[x][y] = true;

        solvemazeutil(maze, x-1 , y , sol+"U" , n ,vis);
        vis[x][y] = false;
     }

     //down

     if(x+1 < n && !vis[x+1][y] && maze[x+1][y] == 1){
        vis[x][y] = true;
        solvemazeutil(maze, x+1 , y , sol+"D" , n ,vis);
        vis[x][y] = false;        
     }

     //right
     if(y+1 < n && !vis[x][y+1] && maze[x][y+1] == 1){
        vis[x][y] = true;
        solvemazeutil(maze, x , y+1 , sol+"R" , n ,vis);
        vis[x][y] = false;         
     }

          //left
     if(y-1 >= 0 && !vis[x][y-1] && maze[x][y-1] == 1){
        vis[x][y] = true;
        solvemazeutil(maze, x , y-1 , sol+"L" , n ,vis);
        vis[x][y] = false;         
     }
}

void solvemaze(int maze[4][4] , int n){
    string sol = "";
    
    vector<vector<bool>> vis(n ,vector<bool>(n ,false));

    if(maze[0][0] == 1){
        solvemazeutil(maze,0,0,sol,n,vis);
    }
}

int main(){

    int n = 4;
    int maze[4][4] = {{1,0,0,0},
                {1,1,0,1},
                {1,1,0,0},
                {0,1,1,1}};

    solvemaze(maze,n);
    return 0;
}

