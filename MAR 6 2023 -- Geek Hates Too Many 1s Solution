class Solution {
    public:
    int noConseBits(int n) {
        // code here
        uint32_t val = 1; // uint32_t data type in c++ can store the integer in form of binary string of max length 32;
        //we will using val to check whether the current bit of given number is set or not;
        val<<=31; // left shifting the operator by 31 because we will be checking each bit from left so as to ensure that the converted bit is smallest and we will get the max value possible; 
        int cur = 0; // cur will store the count of current consecutive set bit;
        for(int i= 0; i<32 ; i++){ // now traverse each bit from left to right;
            if(val & n) cur++; // & operator will return true if both the bits are set , as we know that val current bit is set and if the answer is true it means that current bit of given value n is also set and we will increase the cur counter by 1;
            else cur = 0; // else set cur counter to 0 as the queue of set bits is broken out;
            if(cur == 3){ // if cur counter is 3 i.e. three consecutive set bits are found in given value ;
                n-=val; // change current bit to unset by decreasing the current val from n;
                cur = 0; // set cur counter to 0;
            }
            val>>=1; // right shifting val to move the set bit to next bit;
        }
        return n; // return the max value obtained;
    }
};
