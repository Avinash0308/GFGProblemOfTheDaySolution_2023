class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        int k = 0; // k will store the last day when we change the value to '?';
        for(int i = 0; i<N; i++){ // traversing the array;
            if(P[i] < N-1){ // if current permutation is not referring to last day;
                if(S[P[i]] == S[P[i] + 1] && S[P[i]] != '?'){ // then if string contains same data for current permutation and a day after that;
                    k = i+1; // we will update the value of k with i+1 , 1 is added for 1 based indexing;
                    S[P[i]] = '?'; // and updated the string value with '?';
                }
            }
            if(P[i]>0){ // also if current permutation is not referring to first day;
                if(S[P[i]] == S[P[i] - 1] && S[P[i]] != '?'){ // and string contains same data for current permuatation and day before that;
                    S[P[i]] = '?'; // we will update the string value with '?';
                    k = i+1; // and update the value of k with current day;
                }
            }
        }
        return k; // return the last day obtained;
    }
};
