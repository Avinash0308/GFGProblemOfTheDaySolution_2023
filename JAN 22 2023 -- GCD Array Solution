class Solution {
  public:
    int solve(int N, int K, vector<int> &arr) {
        // code here
        vector<int> v; // vector to store the factors of sum of given array;
        vector<int> p(N); // vector tofind presum of array;
        p[0] = arr[0]; // initializing the 0th index with the 0th element of given array;
        for(int i = 1; i<N ; i++){ // iterating the array from index 1;
            p[i] = arr[i] + p[i-1]; // storing the sum of current array element and sub obtained upto last element in current index of pre sum;
        }
        int sum = p[N-1]; // sum variable to store total sum of given array;
        int r = sqrt(sum); // finding the square root of sum obtained;
        for(int i = 1; i<=r; i++){// the loop will iterate from 1 until the value of i is not greater than r;
            if(sum%i == 0){ // if current value of i divides the sum we will store it in v vector;
                v.push_back(i);
                if(i != (sum/i)){ // and if sum/i is not equal to i i.e. they are two different values we will store that also in array;
                    v.push_back((sum/i));
                }
            }
        }
        int maxy = 1; // the basic ideology is to iterate through the whole array with each factor and the factor which divides at least k of the subarrays i.e. the presum of values of given array will be considered for answer and the max element found of these values will be returned;
        for(int i = 0; i<v.size() ; i++){ // iterating through each factor of sum;
            int count = 0; // count will count the number of presum values that given factor of sum divides completely;
            for(int j = 0; j<N ;j++){ // iterating through each presum value;
                if(p[j]%v[i] == 0){
                    count++;
                }
            }
            if(count>=K){ // if the count is greater than or equal to K i.e. the number of subarrys the current factor can divide is not smaller than k we will compare it to the max yet obtained and if current factor is greater than previous max value we will store it in the maxy variable;
                maxy = max(maxy,v[i]);
            }
        }
        return maxy; //returning the maximum value obtained;
    }
};
