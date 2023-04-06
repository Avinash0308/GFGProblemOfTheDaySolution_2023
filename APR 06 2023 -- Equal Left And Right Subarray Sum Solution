class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        // code here
        int a = 0 , b= 0 , i = 0 , j = N-1;
        while(i<=j){
            if(i == j && a == b) return i+1;
            else if(a == b){
                a += A[i];
                b += A[j];
                i++;
                j--;
            }
            else if(a > b){
                b += A[j];
                j--;
            }
            else{
                a += A[i];
                i++;
            }
        }
        if(a == b && i==j) return i+1;
        else return -1;
    }
};
