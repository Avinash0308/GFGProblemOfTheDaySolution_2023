class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        int min_freq = n+1;
        int max_val = 0;
        unordered_map<int,int> m;
        for(int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second < min_freq){
                min_freq = i.second;
                max_val = i.first;
            }
            else if(i.second == min_freq){
                max_val = max(max_val,i.first);
            }
        }
        return max_val;
    }
};
