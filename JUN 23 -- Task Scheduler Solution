class Solution {
  public:
    int leastInterval(int N, int k, vector<char> &tasks) {
        // code here
        vector<int> count(26);
        for(int i = 0; i<N; i++){
            count[tasks[i]-'A']++;
        }
        int maxy = *max_element(count.begin(),count.end());
        int idle = (maxy-1)*k;
        bool seen = false;
        for(int i = 0; i<26; i++){
            if(count[i] == maxy && !seen){
                seen = true;
            }
            else{
                idle -= min(maxy-1,count[i]);
            }
        }
        idle = max(0,idle);
        return idle + N;
    }
};
