long long int no_of_subarrays(int n, vector<int> &arr) {
    // Write your code here.
    long long int ans = 0;
    long long int cur = 0;
    for(int i = 0; i<n ; i++){
        if(arr[i]){
            ans += (cur*(cur+1))/2;
            cur = 0;
        }
        else{
            cur++;
        }
    }
    ans += (cur*(cur+1))/2;
    return ans;
}
