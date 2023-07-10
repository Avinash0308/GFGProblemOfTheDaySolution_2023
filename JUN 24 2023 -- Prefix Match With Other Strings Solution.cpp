class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){
        if(k > str.size()) return 0;
        string pre_str = str.substr(0,k);
        int count = 0;
        for(int i = 0; i<n; i++){
            string cur_pre_str = arr[i].substr(0,k);
            if(pre_str == cur_pre_str)count++;
        }
        return count;
    }
};
