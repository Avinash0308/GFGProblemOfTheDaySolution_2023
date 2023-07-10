class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> ans;
        for(int i = 0; i<arr.size(); i++){
            if(ans.empty() || ans[ans.size()-1]>=0 && arr[i] >= 0 || ans[ans.size()-1]<0 && arr[i]<0){
                ans.push_back(arr[i]);
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};
