class Solution{
    public:
    bool isPoweroffive(string s){
          if (s.length() == 0) return false;
          if (s[0] == '0') return false;  

        long long decimal =0;
        int power=1;
       for( int i=0 ;i<s.size() ;i++){
           //to ignore leading zeroes we used this method
          decimal= 2*decimal+(s[i] -'0') ;
        }
          if (decimal == 0) return false;
        while(decimal >1 ){
            if( decimal%5!=0) return false;
            decimal /=5;
        }
        return true;
       
    }
    
    int cuts(string s){
        int n = s.size();
        if(n==0 || s[0]=='0') return -1;
        if(isPoweroffive(s)) return 1;
        int minCut =INT_MAX;
        for(int i=1 ;i<s.size() ;i++){
            string left = s.substr(0,i);
            string right = s.substr(i);
            if(isPoweroffive(left)) {
                int rightCut = cuts(right);
                if(rightCut!=-1){
                    minCut =min(minCut ,1+rightCut);
                }
            }
        }
        return minCut!=INT_MAX?minCut:-1;
        
    }
};
