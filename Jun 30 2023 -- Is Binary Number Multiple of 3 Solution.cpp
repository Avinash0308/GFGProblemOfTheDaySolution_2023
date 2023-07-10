class Solution{
public:	
		
	int isDivisible(string s){
	    unordered_map<string,int> m;
	    m[""] = 0;
	    m["1"] = 1;
	    m["10"] = 2;
	    m["11"] = 3;
	    m["100"] = 4;
	    m["101"] = 5;
	    m["110"] = 6;
	    m["111"] = 7;
	    vector<string> v = {"","1","10","11","100","101","110","111"};
	    string rem_string = "";
	    int n = s.size();
	    for(int i = 0; i<n; i++){
	        if(rem_string == "" && s[i] == '0') continue;
	        rem_string += s[i];
	        if(m[rem_string] >= 3){
	            rem_string = v[m[rem_string]-3];
	        }
	    }
	    if(rem_string == "") return 1;
	    else return 0;
	}

};
