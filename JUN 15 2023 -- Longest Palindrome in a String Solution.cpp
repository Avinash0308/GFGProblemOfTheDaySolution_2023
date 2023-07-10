class Solution {
  public:
    string longestPalin (string S) {
        int largest = 1;
        string ans;
        ans.push_back(S[0]);
        int n = S.size();
        for(int i = 0; i<n; i++){
            int low = i-1, high = i;
            while(low>=0 && high<n && S[low] == S[high]){
                low--;
                high++;
            }
            int length = high-low-1;
            if(length > largest){
                largest = length;
                ans = S.substr(low+1,length);
            }
            low = i-1, high = i+1;
            while(low>=0 && high<n && S[low] == S[high]){
                low--;
                high++;
            }
            length = high-low-1;
            if(length > largest){
                largest = length;
                ans = S.substr(low+1,length);
            }
        }
        return ans;
    }
};
