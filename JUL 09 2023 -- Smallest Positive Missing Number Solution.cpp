class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        for(int i = 0; i<n; i++){
            if(arr[i]>0){
                if(arr[i]<=i+1){
                    arr[arr[i]-1] = arr[i];
                }
                else{
                    int j = i;
                    int cur = -1;
                    while(j>=0 && j<n ){
                        if(cur == arr[j]) break;
                        int val = arr[j];
                        arr[j] = cur;
                        cur = val;
                        j = cur-1;
                    }
                    if(j>=0 && j<n && arr[j]>=1 && arr[j]<=n){
                        arr[arr[j]-1] = arr[j];
                    }
                }
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i] != i+1) return i+1;
        }
        return n+1;
    } 
};
