class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
        stack<pair<int,int>> s;
        for(int i =0; i<N ; i++){
            if(s.empty() || (s.top().first != color[i] || s.top().second != radius[i])){
                s.push({color[i],radius[i]});
            }
            else{
                s.pop();
            }
        }
        return s.size();
    }
};
