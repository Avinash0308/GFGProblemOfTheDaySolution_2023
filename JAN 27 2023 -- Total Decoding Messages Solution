class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    long long int mod = 1000000007;
		    if(!(str.size())) return 1;
		    if(str[0] == '0') return 0;
		    for(int i = 0; i<str.size()-1; i++){
		        if(str[i] == '0' && str[i+1] == '0') return 0;
		    }
		    for(int i = 0; i<str.size() ; i++){
		        if(str[i] == '0' && (int)str[i-1] > 50){
		             return 0;
		        }
		    }
		    vector<int> dp(str.size()+1);
		    dp[0] = 1;
		    dp[1] = 1;
		    for(int i = 2; i<str.size()+1 ; i++){
		        int one = str[i-1]-'0';
		        int two = stoi(str.substr(i-2,2));
		        if(one >=1 && one<=9){
		            dp[i] = dp[i-1];
		            dp[i]%=mod;
		        }
		        if(two >=10 && two<=26){
		            dp[i] += dp[i-2];
		            dp[i] %= mod;
		        }
		    }
		    return dp[str.size()];
		}

};
