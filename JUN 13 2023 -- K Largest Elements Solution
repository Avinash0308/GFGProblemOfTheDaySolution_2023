class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    multiset<int> m;
	    for(int i = 0; i<n; i++){
	        if(m.size()<k){
	            m.insert(arr[i]);
	        }
	        else{
	            auto it = m.begin();
	            if(*it < arr[i]){
	                m.erase(it);
	                m.insert(arr[i]);
	            }
	        }
	    }
	    vector<int> ans;
	    for(auto it:m){
	        ans.push_back(it);
	    }
	    for(int i = 0; i<k/2; i++){
	        swap(ans[i],ans[k-i-1]);
	    }
	    return ans;
	}

};
