
class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        // Code here
        sort(arr.begin(),arr.end());
        vector<int> v(N);
        for(int i = 0; i<N-1 ; i++){
            for(int j = i+1; j<N && !v[i]; j++){
                if(arr[j]%arr[i] == 0) v[j] = 1;
            }
            if(arr[i] == arr[i+1]){
                v[i]=1;
                v[i+1] = 1;
            }
        }
        int count = 0;
        for(int i = 0; i<N ; i++){
            if(v[i]) count++;
        }
        return count;
    }
};
