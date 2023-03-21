class Solution{   
public:
    long long solve(int X,int Y,string S){
        stack<char> s;
        long long ans = 0;
        for(int i = 0; i<S.size(); i++){
            if(s.empty()){
                s.push(S[i]);
            }
            else{
                if(X>=Y){
                    if(s.top() == 'p' && S[i] == 'r'){
                        s.pop();
                        ans += X;
                    }
                    else{
                        s.push(S[i]);
                    }
                }
                else{
                    if(s.top() == 'r' && S[i] == 'p'){
                        s.pop();
                        ans += Y;
                    }
                    else{
                        s.push(S[i]);
                    }
                }
            }
        }
        stack<char> se;
        while(!s.empty()){
            se.push(s.top());
            s.pop();
        }
        while(!se.empty()){
            if(s.empty()){
                s.push(se.top());
                se.pop();
            }
            else{
                if(s.top() == 'p' && se.top() == 'r'){
                    ans += X;
                    s.pop();
                    se.pop();
                }
                else if(s.top() == 'r' && se.top() == 'p'){
                    ans += Y;
                    s.pop();
                    se.pop();
                }
                else{
                    s.push(se.top());
                    se.pop();
                }
            }
        }
        return ans;
    }
};
