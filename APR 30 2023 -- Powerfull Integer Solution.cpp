class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        int maxy = 0;
        int shor = INT_MAX;
        for(int i = 0; i<n ; i++){
            maxy = max(maxy,intervals[i][1]);
            shor = min(shor,intervals[i][0]);
        }
        vector<int> v(maxy+1);
        vector<int> x(maxy+1);
        for(int i = 0; i<n ; i++){
            v[intervals[i][0]]++;
            x[intervals[i][1]]++;
        }
        maxy = -1;
        int cur = 0;
        for(int i = shor; i<v.size(); i++){
            cur +=v[i];
            if(cur >= k) maxy = i;
            cur -= x[i];
        }
        return maxy;
    }
};
