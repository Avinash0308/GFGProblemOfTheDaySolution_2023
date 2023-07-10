class Solution
{
public:
    pair<long long, long long> solve(int low , int high , vector<long long> &v){
        int l = low , h = high-1;
        long long miny = 0 , maxy = v[high];
        if(low>0) maxy -= v[low-1];
        while(l<=h){
            int mid = l + (h-l)/2;
            long long cur1 = v[mid];
            if(low>0) cur1 -= v[low-1];
            long long cur2 = v[high]-v[mid];
            if(abs(cur1-cur2) < maxy - miny){
                miny = min(cur1,cur2);
                maxy = max(cur1,cur2);
            }
            if(cur1<cur2) l = mid+1;
            else h = mid-1;
        }
        return {miny,maxy};
    }
    long long minDifference(int N, vector<int> &A) {
        vector<long long int> v(N);
        long long int cur = 0;
        for(int i = 0; i<N; i++){
            cur += A[i];
            v[i] = cur;
        }
        long long int ans = INT_MAX;
        for(int i = 1; i<N-2; i++){
            pair<long long, long long> p1 = solve(0,i,v);
            pair<long long, long long> p2 = solve(i+1,N-1,v);
            ans = min(ans,max(p1.second,p2.second)-min(p1.first,p2.first));
        }
        return ans;
    }
};
