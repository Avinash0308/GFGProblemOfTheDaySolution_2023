class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    int n = S.size();
		    unordered_map<string,int> m;
		    vector<string> ans;
		    while(m.find(S) == m.end()){
		        ans.push_back(S);
		        m[S] = 1;
		        int i = n-1;
		        while(i>0 && S[i] <= S[i-1])i--;
		        if(i == 0){
		            reverse(S.begin(),S.end());
		        }
		        else{
		            int j  = n-1;
		            while(j>=i && S[j] <= S[i-1])j--;
		            swap(S[i-1],S[j]);
		            for(int k = i; k<n-1+i-k; k++){
		                swap(S[k],S[n-1-k+i]);
		            }
		        }
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
