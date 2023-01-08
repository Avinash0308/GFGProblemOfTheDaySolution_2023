class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        vector<int> v(k); // vector v will store count of modulous to k;
        for(int i = 0; i<n ; i++){
            v[arr[i]%k]++; // counting all the elements with respective modulous;
        }
        long long sum = 0; // it will store all the pairs with absolute difference divisible by k;
        for(int i = 0; i<k ; i++){ // traversing the modulous array , also, the elements with same modulous can only have absolute difference divisible by k;
            sum += ((long long)v[i]*(v[i]-1))/2; // no.of pairs = (n-1)*n/2;
        }
        return sum; // return the total sum obtained;
    }
};
