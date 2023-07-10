class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    map<int,int> m;
	    for(int i = 0; i<n ; i++){
	        m[arr[i]] = i;
	    }
	    int i = 0;
	    for(auto it : m){
	        arr[it.second] = i;
	        i++;
	    }
	    
	}

};
