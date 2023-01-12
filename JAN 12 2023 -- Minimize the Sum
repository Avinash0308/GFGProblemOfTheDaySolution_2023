class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // We will be using multiset to solve the problem becuase multiset has a sorting system by which whenever we add any element in multiset it get sorted accordingly;
        multiset<int> q; // We will use this property to get 2 shortest element present in set;
        for(int i = 0; i<N ; i++){ // firstly insert all the elements in q ;
            q.insert(arr[i]);
        }
        int sum = 0; // it will store sum of the values deleted from array;
        while(q.size() > 1){ // loop will run until there is only one element left in multiset;
            auto it = q.begin(); 
            int a = *it; // shortest element;
            q.erase(it); // deleting it from multiset;
            it = q.begin(); // second shortest element will now move to begining of set;
            int b = *it; // storing second shortest element;
            q.erase(it); // deleting it from multiset;
            q.insert(a+b); // now as per instruction we will insert the sum of deleted elements in the multiset;
            sum += (a+b); // adding the sum of deleted elements to sum variable;
        } 
        return sum; // returning the sum obtained;
    }
};
