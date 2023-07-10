class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string s = A; // copying the string A in s;
        while(s.size() <= 2*B.size()){ // now we will run loop  until the size of loop s is not greater than double of size of B;
            s+=A; // we are doing so because it is obvious that B can be substring of A only if A is greater than B and if the last index of s marks the start of substring B the size of s must be double of B;
        }
        int x = -1; // this will store the index where the substring B is found in s;
        for(int i = 0; i<=s.size()-B.size() ; i++){ // loop will run until the value of i+B.size() is smaller than or equal to s.size();
            string xx = s.substr(i,B.size()); // using substr function to extract the string of size B from s ;
            if(xx == B){ // if xx is equal to B i.e. string B is found in s;
                x = i; // store the current index and break the array;
                break;
            }
        }
        if( x == -1) return x; // if the string B is not found in s return -1 as stated in question;
        x += B.size(); // adding size of String B in nx;
        if(x % A.size() == 0) return x/A.size(); // if x is directly divisible to size of A return the value x/A.size();
        else return (x/A.size() + 1); // else return the value added by 1;
    }
};
