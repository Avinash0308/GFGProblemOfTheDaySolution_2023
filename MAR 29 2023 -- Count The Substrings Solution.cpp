class Solution
{
    public:
    int countSubstring(string S)
    {
        int res = 0;
        int small = 0;
        int big = 0;
        int n = S.size();
        for(int i = 0; i<n ; i++){
            small = 0;
            big = 0;
            for(int j = i; j<n ; j++){
                if((int)S[j] >= 97 && (int)S[j] <= 122){
                    small++;
                }
                else{
                    big++;
                }
                if(small == big) res++;
            }
        }
        return res;
    }
};
