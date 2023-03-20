class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int miny = INT_MAX;
        for(int i = 0; i<N ; i++){
            miny = min(miny,abs(cur-pos[i])*time[i]);
        }
        return miny;
    }
};
