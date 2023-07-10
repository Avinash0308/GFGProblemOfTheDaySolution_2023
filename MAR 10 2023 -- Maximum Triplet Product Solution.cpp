class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	long long a = INT_MIN , b = INT_MIN , c = INT_MIN;
    	long long d = INT_MIN , e = INT_MIN;
    	for(int i = 0; i<n ;i++){
    	    if(arr[i] >= a){
    	        c = b;
    	        b = a;
    	        a = arr[i];
    	    }
    	    else if(arr[i] >= b){
    	        c = b;
    	        b = arr[i];
    	    }
    	    else if(arr[i]>=c){
    	        c = arr[i];
    	    }
    	    if(arr[i] <= 0){
    	        if(abs(arr[i]) >= d){
    	            e = d;
    	            d = abs(arr[i]);
    	        }
    	        else if(abs(arr[i]) >= e){
    	            e = abs(arr[i]);
    	        }
    	    }
    	}
    	long long first = a*b*c;
    	long long second = INT_MIN;
    	if(d != INT_MIN && e != INT_MIN) second = d*e*a;
    	return max(first,second);
    }
};
