#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int x, y, val;
    Node(int a, int b, int v){
        x = a;
        y = b;
        val = v;
    }
};
class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(X == 0 && Y == 0) return 0;
        if(X<0 || X>=N || Y<0 || Y>=M || A[0][0] == 0 || A[X][Y] == 0) return -1;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                if(A[i][j]){
                    A[i][j] = INT_MAX;
                }
            }
        }
        vector<vector<int>> r;
        r = {{-1,0},{0,1},{1,0},{0,-1}};
        queue<Node*> q;
        q.push(new Node(0,0,0));
        while(!q.empty()){
            Node* cur = q.front();
            q.pop();
            if(cur->x<0 || cur->x>=N || cur->y<0 || cur->y>=M || cur->val >= A[cur->x][cur->y]) continue;
            A[cur->x][cur->y] = cur->val;
            for(int i = 0; i<4; i++){
                q.push(new Node(cur->x+r[i][0],cur->y+r[i][1],cur->val+1));
            }
        }
        if(A[X][Y] == INT_MAX) return -1;
        else return A[X][Y];
    }
};
int main(){
    return 0;
}