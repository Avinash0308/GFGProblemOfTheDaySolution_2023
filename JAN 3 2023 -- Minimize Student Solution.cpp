class Solution {
  public:
    int removeStudents(int arr[], int N) {
        // code here
        vector<int> v;    // This vector will store the length of the possible maximum subsequence;
        for(int i = 0; i<N ; i++){
            auto it = lower_bound(v.begin(),v.end(),arr[i]); // it will store the lower bound of the given value in the array;
            if(it == v.end()){  // If lower bound is not found we will push the given element in the answer array;
                v.push_back(arr[i]);
            }
            else{
                *it = arr[i];    // else the array value will get updated;
            }
        }
        return N-v.size();   // returning the no of students to be removed;
    }
};
