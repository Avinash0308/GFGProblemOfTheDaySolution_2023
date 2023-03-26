class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        vector<int> v(leaves+1);
        sort(frogs,frogs+N);
        for(int i = 0; i<N && frogs[i]<=leaves; i++){
            if(v[frogs[i]] == 0){
                for(int j = frogs[i]; j<=leaves; j+=frogs[i]){
                    v[j] = 1;
                }
            }
        }
        int val = 0;
        for(int i = 1; i<=leaves; i++){
            if(!v[i]) val++;
        }
        return val;
    }
};
