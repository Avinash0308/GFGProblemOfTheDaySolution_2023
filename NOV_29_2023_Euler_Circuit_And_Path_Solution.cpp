#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
	    int one = 0;
	    for(int i = 0; i<V; i++){
	        if(adj[i].size()%2 == 1){
	            one++;
	        }
	    }
	    if(one == 2) return 1;
	    else if(one == 0) return 2;
	    else return 0;
	}
};