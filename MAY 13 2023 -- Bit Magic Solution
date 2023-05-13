class Solution {
  public:
    int bitMagic(int n, vector<int> &arr) {
        // code here
        int val = 0;
        for(int i = 0; i<(n+1)/2; i++){
            if(arr[i] != arr[n-i-1]) val++;
        }
        return (val+1)/2;
    }
};
