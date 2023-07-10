class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int n = q.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            q.push(q.front());
            if(q.front() == k) count++;
            q.pop();
        }
        return count;
    }
    
};
