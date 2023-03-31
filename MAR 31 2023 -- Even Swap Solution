class Solution
{
    public:
    void merge(int low , int mid , int high , vector<int> &a){
        int i = low , j = mid+1;
        vector<int> cur;
        while(i<=mid && j<=high){
            if(a[i] > a[j]){
                cur.push_back(a[i]);
                i++;
            }
            else{
                cur.push_back(a[j]);
                j++;
            }
        }
        while(i<=mid){
            cur.push_back(a[i]);
            i++;
        }
        while(j<=high){
            cur.push_back(a[j]);
            j++;
        }
        for(int k = 0; k<cur.size(); k++){
            a[low+k] = cur[k];
        }
    }
    void solve(int low , int high, vector<int> &a){
        if(low<high){
            int mid = (low+high)/2;
            solve(low,mid,a);
            solve(mid+1,high,a);
            merge(low,mid,high,a);
        }
    }
    vector <int> lexicographicallyLargest(vector <int> &a,int n)
    {
        // Code here
        for(int i = 0; i<n ; i++){
            int j = i;
            while(j+1<n && a[i]%2 == a[j+1]%2){
                j++;
            }
            solve(i,j,a);
            i = j;
        }
        return a;
    }
};
