class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        vector<pair<int,int>> v(n);
        for(int i = 0; i<n; i++){
            v[i] = {arr[i],i};
        }
        sort(v.begin(),v.end());
        vector<long long> ans(n);
        long long int sum = 0;
        for(int i = 0; i<n; i++){
            ans[v[i].second] = sum;
            long long int cur = 0;
            cur += v[i].first;
            while(i+1<n && v[i+1].first == v[i].first){
                ans[v[i+1].second] = sum;
                cur+=v[i+1].first;
                i++;
            }
            sum += cur;
        }
        return ans;
    }
};
