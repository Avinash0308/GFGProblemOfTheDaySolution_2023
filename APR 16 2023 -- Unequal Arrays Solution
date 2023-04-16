lass Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        long long int a = 0 , b = 0 , c = 0 , d = 0;
        vector<int> g , h , l , k;
        for(int i = 0; i<N ; i++){
            a+=A[i];
            b+=B[i];
            if(A[i]%2){ c++; g.push_back(A[i]);}
            else l.push_back(A[i]);
            if(B[i]%2){ d++; h.push_back(B[i]);}
            else k.push_back(B[i]);
        }
        if(a!=b || c!=d) return -1;
        sort(g.begin(),g.end());
        sort(h.begin(),h.end());
        sort(l.begin(),l.end());
        sort(k.begin(),k.end());
        long long int total = 0;
        for(int i = 0; i<g.size(); i++){
            if(g[i]<h[i]){
                total += h[i]-g[i];
            }
        }
        long long int ans = total/2;
        total = 0;
        for(int i = 0; i<l.size(); i++){
            if(l[i]<k[i]){
                total += k[i]-l[i];
            }
        }
        ans += total/2;
        return ans;
    }
};
