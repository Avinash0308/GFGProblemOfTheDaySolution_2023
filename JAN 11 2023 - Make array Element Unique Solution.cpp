class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        int incre = 0; // it will count value that will be increamed;
        sort(arr.begin(),arr.end()); // sorting the array ;
        for(int i = 1; i<N ; i++){ // traversing the array from first index because 0th index need not to be increamented at any case;
            if(arr[i] <= arr[i-1]){ // if the value previous to current index is greater or euqal to current index value we will increament the current index with value 1 greater than the previous one;
                incre += (arr[i-1]-arr[i]+1); // increasing the value of incre with value by which current index value is increamented;
                arr[i] = arr[i-1]+1;
            }
        }
        return incre; // returning the value;
    }
};
