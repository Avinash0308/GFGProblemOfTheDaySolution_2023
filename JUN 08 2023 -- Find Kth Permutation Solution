class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            v[i] = i+1;
        }
        for(int l = 0; l<k-1; l++){
            int i = n-1;
            while(i>0 && v[i] < v[i-1]){
                i--;
            }
            if(i == 0){
                reverse(v.begin(),v.end());
            }
            else{
                int j;
                for(j = n-1; j>=i; j--){
                    if(v[j] > v[i-1]) break;
                }
                swap(v[j],v[i-1]);
                for(j = i; j<n-j+i; j++){
                    swap(v[j],v[n-1-j+i]);
                }
            }
        }
        string ans;
        for(int i =0; i<n; i++){
            ans += char(v[i]+48);
        }
        return ans;
    }
};
