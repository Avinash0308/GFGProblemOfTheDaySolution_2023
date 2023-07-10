int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long i=0,j=0,cnt=0,pro=1,ans=0;
        while(i<n){
            pro*=a[i];
            while(j<=i && pro>=k){
                pro/=a[j];
                j++;
            }
            ans+=(i-j+1);
            i++;
        }
        return ans;
    }
