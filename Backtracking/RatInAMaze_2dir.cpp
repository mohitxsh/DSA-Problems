#include<bits/stdc++.h>
using namespace std;

bool isSafe(int n, int x, int y, vector<vector<int>>& maze){
    if(x>=0 && x<n && y>=0 && y<n && maze[x][y]==1) return true;
    return false;
}

bool solve(vector<vector<int>>& maze, vector<vector<int>>& res,int x, int y, int n){
    if(x == n-1 && y == n-1){
        res[x][y] = 1;
        return true;
    }
    if(isSafe(n,x,y,maze)){
        
        res[x][y]=1;
        if(solve(maze,res,x+1,y,n)==true){
            return true;
        }
        if(solve(maze,res,x,y+1,n)==true){
            return true;
        }
        //backtrack
        res[x][y] = 0;
        return false;
    }
    return false;
}


int main() {
    vector<vector<int>> maze{{1, 0, 0, 0, 0},
   {1, 1, 0, 1, 0},
   {0, 1, 1, 1, 0},
   {0, 0, 0, 1, 0},
   {1, 1, 1, 1, 1},
   };
    vector<vector<int>> res;
    vector<int> v(5,0);
    for(int i=0;i<maze.size();i++){
        res.push_back(v);
    }
    solve(maze, res, 0, 0, 5);
    for(int i=0;i<maze.size();i++){
        for(int j=0;j<maze.size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}