class Solution{
public:
    void findsum(int &sum, vector<int> &v){
        sum = accumulate(v.begin(),v.end(),0);
    }
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1 = 0, sum2 = 0, sum3 = 0;
        findsum(sum1,S1);
        findsum(sum2,S2);
        findsum(sum3,S3);
        int i = 0 , j = 0 , k = 0;
        int val = sum1;
        while(i<N1 && j<N2 && k<N3 && (val != sum2 || val!= sum3 )){
            int maxy = max({sum1,sum2,sum3});
            if(maxy == sum1){
                sum1 -= S1[i];
                i++;
            }
            else if(maxy == sum2){
                sum2 -= S2[j];
                j++;
            }
            else{
                sum3 -= S3[k];
                k++;
            }
            val = sum1;
        }
        return (sum1 == sum2 && sum1 == sum3)?sum1:0;
    }
};
