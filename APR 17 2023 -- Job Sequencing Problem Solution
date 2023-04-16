class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<pair<int,int>> v(n);
        int maxy = 0;
        for(int i= 0; i<n ; i++){
            v[i] = {arr[i].profit,arr[i].dead};
            maxy = max(maxy,arr[i].dead);
        }
        sort(v.begin(),v.end());
        vector<int> dead(maxy+1);
        int total = 0 , job = 0;
        for(int i = n-1; i>=0 ; i--){
            int d = v[i].second;
            while(d>0 && dead[d]) d--;
            if(d>0){
                dead[d] = 1;
                total += v[i].first;
                job++;
            }
        }
        return {job,total};
    } 
};
