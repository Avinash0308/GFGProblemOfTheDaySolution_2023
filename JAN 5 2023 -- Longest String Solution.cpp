class Solution
{
public:
    string longestString(vector<string> &words)
    {
        // code here
        vector<pair<int,string>> s; // creating vector of pairs of string and there respective size , to be used for sorting;
        map<string,int> m; // map to store the strings in the vector , it will tell us whether the respective prefix is present in vector or not;
        for(int i = 0; i<words.size() ; i++){
           s.push_back({words[i].size(),words[i]});
           m[words[i]] = words[i].size();
        }
        sort(s.begin(),s.end()); // sorting the s vector according to the size of strings;
        vector<string> ans; // it will store all possible strings with maximum size;
        int maxy = 0;
        for(int i = s.size()-1; i>=0; i--){ // traversing the vector from back because we will break the loop when the iterating string is smaller than max possible answer string;
            string t = s[i].second; 
            if(t.size() < maxy){
                break;
            }
            t.pop_back(); // popping the last element of string because the whole string is obviously present in the vector ;
            int flag = 1;
            int n = t.size();
            while(n--){ // until the size of string is 0;
                if(m.find(t) == m.end()){ // if the current prefix is not present in the vector given we will break the while loop;
                    flag = 0;
                    goto here;
                }
                t.pop_back(); // else we will check until the string is not null;
            }
            here:
            if(flag){ // if all possible prefix of string is present in given vector we will store it in answer string , also this will be the maximum length string because we are traversing from back of vector but we will still traverse the vector upto the point strings are equal to max possible size because we need to find the lexographically shortest string;
                ans.push_back(s[i].second);
                maxy = ans[0].size();
            }
        }
        sort(ans.begin(),ans.end()); // further the answer vector will contain all the possible string with max length , so we will sort the vector to find the lexographically shortest string which will be rearranged to 0 index;
        if(ans.size() == 0){
            string emp;
            return emp; // if answer vector is empty we will return the empty string;
        }
        return ans[0]; // else the 0 th index of answer vector will be returned;
    }
};
