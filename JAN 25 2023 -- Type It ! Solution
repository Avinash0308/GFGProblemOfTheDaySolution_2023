class Solution {
  public:
    int minOperation(string s) {
        // question state that we need to find min operation in which the string can be created given that only one character can be pushed at a time and also the string formed til any index can also be pushed at most once and it will be considered as only one operation;
        // so to complete this question we need to find max substr which is equal to string formed upto any index so that it can be pushed in string in one go;
        int maxy = 0; // maxy will store the value of maximum common substring;
        string y; // each character of string s will be pushed back in string y one by one;
        y.push_back(s[0]); // pushing back the first character to ensure y is not empty;
        for(int i = 1; i<s.size() ; i++){ // starting the loop from index one because 0th index is already present in string;
            string x = s.substr(i,y.size()); // using substr to calculate the string from current index of size equal to size of current string y;
            if(x == y){ // if the string x formed is equal to current string y we will update value maxy by current size of y because at any time the size of y will be greater than the value maxy;
                maxy = y.size();
            }
            y.push_back(s[i]); // pushing the current character in the string y;
        }
        if(maxy){ // if maxy is not zero i.e. there is a substring present in string s we will return total size of s reduced by max sub string size and will also add 1 because adding a substring is also one operation;
            return s.size()-maxy+1;
        }
        else{
            return s.size(); // else we will only return the size of whole string because if there is not substring in the given string s we will have to push each character one by one and total no of operation will become equal to total size of string;
        }
    }
};
