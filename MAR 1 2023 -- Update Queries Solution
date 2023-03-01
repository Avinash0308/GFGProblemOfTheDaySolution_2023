class Solution{
    public:
        vector<int> updateQuery(int n,int Q,vector<vector<int>> &u)

    {

            vector<vector<int>> bit(n,vector<int>(17,0));//n denotes index of array 17 is upto which the bit representation of 100000 can go means in worst case every index can be demanded to be updated by 100000 

            int l,r,val;

            

            for(auto it:u)

            {

                l=it[0]-1;

                r=it[1];

                val=it[2];

                

                for(int i=0;i<17;i++)

                {

                    if(((val>>i)&1))

                    {

                        bit[l][i]++;// INCREASE THE NEW ELEMENT ADDED IN THE STARTING L INDEX 

                        

                        if(r<n)

                            bit[r][i]--;

                    }

                }

            }

            

            for(int i=0;i<n-1;i++)

            {

                for(int j=0;j<17;j++)

                    bit[i+1][j]+=bit[i][j];//ADDITION IS DID BY TAKING DATA FROM THE PREVIOUS ROW TO THE CURRENT ROW AS WE DO NOT KNOW IF THE CURRENT NEWLY ADDED 1 TO ALREADY >=0 VALUE FROM

                    //PREVIOUS  OR CURRENT MAY DECREASE ANY TIME BUT SAME BIT MAY BE 

                    //STILL USED BY ANY OTHER NUMBER HAVING STILL THE FURTHER NUMBERS IN IT RANGE TO UPDATE

                    //SO TAKING OR FROM THE PREVIOUS ROW MAY CANCEL OUT ALL THE NUMBERS USING THE BIT WHILE IN REALITY ONLY 

                    //ONE NUMBER'S RANGE WOULD HAVE ENDED OVER THERE

            }

            

            int sum;

            vector<int> ans;

            

            for(int i=0;i<n;i++)

            {

                sum=0;

                

                for(int j=0;j<17;j++)

                {

                    if(bit[i][j])

                        sum+=pow(2,j);

                }

                

                ans.push_back(sum);

            }

            

            return ans;

    }
};
