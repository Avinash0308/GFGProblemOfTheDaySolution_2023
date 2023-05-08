class Solution{
    public:
        int modulo(string s,int m)
        {
            int cur = 0;
            int i = 0;
            while(i<s.size()){
                cur = cur*2 + (int)s[i]-48;
                int di = cur/m;
                cur -= m*di;
                i++;
            }
            return cur;
        }
};
