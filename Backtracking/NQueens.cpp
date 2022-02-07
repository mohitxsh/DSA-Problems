#include <bits/stdc++.h>
using namespace std;

void print(int n, vector<vector<int>>& board){
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cout<<board[a][b]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}

bool isSafe(int row, int col, vector<vector<int>>& board, int n) {
    int duprow = row;
    int dupcol = col;
    while(duprow>=0 && dupcol>=0){
        if(board[duprow][dupcol]==1) return false;
        duprow--;
        dupcol--;
    }
    dupcol = col;
    duprow = row;
    while(dupcol>=0){
        if(board[duprow][dupcol]==1) return false;
        dupcol--;
    }
    dupcol=col;
    duprow=row;
    while(duprow<n && dupcol>=0){
        if(board[duprow][dupcol]==1) return false;
        duprow++;
        dupcol--;
    }
    return true;
}

void solve(int col, vector<vector<int>>& board, int n){
    //base case
    if(col==n){
        print(n, board);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]=1;
            solve(col+1,board,n);
            board[row][col]=0;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of queens:"<<endl;
    cin>>n;
    vector<vector<int>> board;
    vector<int> v(n, 0);
    for(int i=0;i<n;i++){
        board.push_back(v);
    }
    solve(0,board,n);
    return 0;
}