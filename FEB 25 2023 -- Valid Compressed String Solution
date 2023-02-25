class Solution {
  public:
    int checkCompressed(string S, string T) {
        int i = 0 , j = 0;
        while(i<S.size() && j<T.size()){
            if((int)T[j] >= 65){
                if(S[i] == T[j]){
                    i++;
                    j++;
                }
                else{
                    return 0;
                }
            }
            else{
                int val = (int)T[j]-48;
                while(j+1 < T.size() && (int)T[j+1] >= 48 && (int)T[j+1] <= 57){
                    val = val*10 + (int)T[j+1] - 48;
                    j++;
                }
                i+=val;
                j++;
            }
        }
        if(i == S.size() && j == T.size()) return 1;
        return 0;
    }
};
