class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &a, vector<vector<int>> &Q) {
        // code here
        
        map<int,int> m; // we are using hash map to store the count the number of indexes that contains same value;
        vector<int> count(N); // count will store the count of number of times value a[i] has appeared from i to n-i which will be done by the use of map m;
        for(int i = N-1; i>=0; i--){ // start traversing the array from back because we need to account the count of values from i to n-1 index , so by traversing from back we will insure that the value m[a[i]] is numbers of times value a[i] appeared from i to n-1;
            m[a[i]]++; // increament the count of a[i] by 1;
            count[i] = m[a[i]]; // and store the value m[a[i]] obtained in count[i] , by doing so we got the number of times value a[i] appeared in the vector a from ith index to last index;
        }
        vector<int> ans(num); // ans vector will be used to store the answers;
        for(int i = 0; i<num ; i++){ // now go through each query one by one;
            int cou = 0; // cou counter will count the number of indexes in vector count whose value is equal to Q[i][2];
            for(int j = Q[i][0]; j<=Q[i][1]; j++){ // now traverse the arry count from L (Q[i][0]) to R (Q[i][1]) ;
                if(count[j] == Q[i][2]){ // if count[j] is equal to k ;
                    cou++; // increament the cou counter by 1;
                }
            }
            ans[i] = cou; // store the value obtained in ans[i];
        }
        return ans; // return the final vector obtained;
    }
};
