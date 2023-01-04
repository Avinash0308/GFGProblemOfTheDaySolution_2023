class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
        vector<pair<int,pair<int,int>>> v; // intitializing a vector of pair of int and pair of int and int;
        for(int i = 0; i<n;  i++){
            v.push_back({intervals[i][0],{intervals[i][1],intervals[i][2]}}); // pushing the elements in given vector;
        }
        
        //NOTE - We can also sort the array on the basis of starting time without creating the vector of pairs but if we do so we need to sort the array manually;
        
        vector<int> in(n);  // this vector will store the maximum profit upto given index;
        sort(v.begin(),v.end()); // using stl to sort the above declared vector;
        int x = v[n-1].first; // traversing from right so as to get maximum profit upto the reached index , storing the last starting point in x to be used further;
        in[n-1] = v[n-1].second.second; // Also adding the last profit amount in the last index of in vector because it is the only profit possible upto this point;
        for(int i = n-2; i>=0 ; i--){
            if(v[i].second.first <= v[i+1].first){   // If the end point of current time slot is smaller than or equal to starting point of just right time slot we will add it's profit with the current profit as it will always be greatest and will store it to the in vecotr;
                in[i] = v[i].second.second + in[i+1];
            }
            else{
                int j = i+1; // else we will traverse the array from current index to index upto where the starting point is greater than or equal to the end point of current time slot;
                while(j<n && v[j].first < v[i].second.first){
                    j++;
                }
                if(j!=n){   // after getting the desired slot we will compare the sum of current profit and choosen slot's profit with the profit of next right in[i+1] value and store the max of them in current index of in;
                    in[i] = max(v[i].second.second + in[j] , in[i+1]);
                }
                else{
                    in[i] = max(v[i].second.second,in[i+1]); // if the desired slot is not present in the array we will store the max between the current profit and profit of next right slot;
                }
            }
        }
        return in[0]; // as after each iteration the max upto that index is stored in the in vector , in[0] will contain the max profit obtained after traversing the whole array and will return it;
    }
};
