class Solution{   
  public:
    string secondSmallest(int S, int D){
        if(D*9 <= S || S == 1 || D == 1){
            return "-1";
        }
        string ans;
        int a = D;
        int v = S;
        while(a){
            if(a == 1){
                ans.push_back(char(v+48));
                v = 0;
            }
            else{
                
                if(v-9 >= 1){
                    ans.push_back('9');
                    v-=9;
                }
                else{
                    ans.push_back((char)(v+47));
                    v=1;
                }
            }
            a--;
        }
        reverse(ans.begin(),ans.end());
        int i = 0;
        while(i<D-2 && ans[i+1] != '9'){
            i++;
        }
        ans[i] = char((int)ans[i] + 1);
        ans[i+1] = char((int)ans[i+1] - 1);
        return ans;
    }
};
