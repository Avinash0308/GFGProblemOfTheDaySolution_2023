class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        sort(arr.begin(),arr.begin()+n/2);
        int count = 0;
        for(int i = n/2; i<n ; i++){
            int start = 0 , end = (n/2) - 1;
            int mid;
            while(start<=end){
                mid = (start+end)/2;
                if(arr[mid] >= arr[i]*5){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
            count += (n/2 - start);
        }
        return count;
    }  
};
