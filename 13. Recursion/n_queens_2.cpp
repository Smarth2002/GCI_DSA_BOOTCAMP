//https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/

#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &board, int x, int y, int N){
        int n=board.size();
         for(int i=0; i<y; i++){
             if(board[x][i]==1){
                 return false;
             }
         }
         for(int i=x,j=y;i>=0 && j>=0;i--,j--){
             if(board[i][j]==1){
                 return false;
             }
         }
         for(int i=x,j=y;j>=0 && i<N;i++,j--){
            if(board[i][j]==1){
                return false;
            }
         }
         return true;
}

void backtracking(vector<vector<int>> &board, int col, int N, vector<vector<int>> &result){
        if(col>=N){
            vector<int> v;
            for(int i=0;i<N;i++) {
                for(int j=0;j<N;j++) {
                    if(board[i][j]==1){
                        v.push_back(j+1);
                    }
                }
            }
            result.push_back(v);
            return;
        }
        for(int i=0;i<N;i++){
            if(isSafe(board,i,col,N)==true){
 //MARK           board[i][col]=1; 
 //DEAL           backtracking(board,col+1,N,result);
 //BACKTRACK      board[i][col]=0;
            }
        }
        return;
}

vector<vector<int>> nQueen(int n) {
   vector<vector<int>> result;
   vector<vector<int> > board(n, vector<int>(n, 0));
        
   backtracking(board,0,n,result);
        
   sort(result.begin(),result.end());
        
   return result;
}