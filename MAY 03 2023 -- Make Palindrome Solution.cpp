class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string,int> m;
        for(int i = 0; i<n; i++){
            string cur = arr[i];
            reverse(arr[i].begin(),arr[i].end());
            if(cur != arr[i]){
                m[cur]++;
            }
            m[arr[i]]++;
        }
        int c = 0;
        for(auto i:m){
            if(i.second%2){
                c++;
            }
            
        }
        if(c>1) return false;
        return true;
    }
};
