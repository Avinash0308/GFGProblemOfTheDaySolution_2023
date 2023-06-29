class Solution{
public:
    bool ishappy(int n, unordered_map<int,int> &m, unordered_map<int,int> &visit){
        if(n == 1) return true;
        if(m.find(n) == m.end() && visit.find(n) == visit.end()){
            int sum = 0;
            int val = n;
            visit[n] = true;
            while(val){
                int x = val%10;
                sum += (x*x);
                val/=10;
            }
            if(ishappy(sum,m,visit) == true){
                return true;
            }
            else{
                m[n] = false;
                visit.erase(n);
                return false;
            }
        }
        else return false;
    }
    int nextHappy(int N){
        N+=1;
        unordered_map<int,int> m;
        unordered_map<int,int> visit;
        while(!ishappy(N,m,visit)){
            N++;
        }
        return N;
    }
};
