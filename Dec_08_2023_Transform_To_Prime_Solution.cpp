class Solution
{
    public:
    bool isPrime(int val){
        if(val == 1) return false;
        for(int i= 2; i*i<=val; i++){
            if(val%i == 0) return false;
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int sum = accumulate(arr,arr+N,0);
        int val = sum;
        while(!isPrime(val)) val++;
        return val-sum;
    }
};
