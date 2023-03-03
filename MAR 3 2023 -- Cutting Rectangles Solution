class Solution{
public:
    vector<long long int> minimumSquares(long long int L, long long int B)
    {
        // if we dive deep into the problem we just need not find the greatest factor that divides both breadth and length because we need to find the square of greatest length and that is only possible when our square length divedes both the sides;
        long long int miny = __gcd(L,B); // so to find HCF we will use the C++ inbuilt function __gcd(a,b);
        return {(L*B)/(miny*miny),miny}; // now just return the vector having first value as no of min possible square cuts and length of each square cut;
    }
};
