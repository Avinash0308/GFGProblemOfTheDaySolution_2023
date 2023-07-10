class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int five = 0 , ten = 0 , twenty = 0;
        for(int i = 0; i<N ; i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                if(five){
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
            }
            else{
                if(five && ten){
                    five--;
                    ten--;
                    twenty++;
                }
                else if(five>=3){
                    five-=3;
                    twenty++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
