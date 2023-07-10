class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        for(int i = 0; i<n-2; i++){
            int req = -arr[i];
            int j = i+1, k = n-1;
            while(j<k){
                int val = arr[j]+arr[k];
                if(val == req) return true;
                else if(val > req) k--;
                else j++;
            }
        }
        return false;
    }
};
