class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        vector<int> v(n+1);
        int t = 0;
        v[arr[0]] = 1;
        for(int i = 1; i<n  ;i++){
            if(v[arr[i]]) t+=time[arr[i]-1];
            else{
                t++;
                v[arr[i]] = 1;
            }
        }
        return t;
    }
};
