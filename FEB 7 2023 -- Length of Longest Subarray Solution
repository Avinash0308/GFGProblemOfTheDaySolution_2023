class Solution {
    public:
        // Function to return the length of the
        //longest subarray with positive product
        int maxLength(vector<int> &arr,int n){
            // to solve the problem we will consider zero as the start of new subarray because any number multiplied with zero will give zero as output but we need to find a substring with pos mulitple;
           int length = 0; // to store the length traversed from last zero index;
           int last = -1; // to store the first negative index after the last zero index;
           int max_len = 0; // to store the max length found;
           int neg = 0; // to count the number of negative index;
           for(int i = 0; i<n ; i++){ // start traversing the array from 0th index;
               if(arr[i] == 0){ // if arr[i] is 0 , we will start the new substring;
                   length = 0; // to do so firstly make length 0;
                   neg = 0; // thereafter number of negative zero;
                   last = -1; // and first neg index -1;
               }
               else if(arr[i]>0){ // else if the index pos;
                   length++; // increament the length;
                   if(neg%2 == 0){ // if number of negative are even i.e. there multiple is going to be pos;
                       max_len = max(max_len,length); // then store the max of max_len and current length in max_len;
                   }
                   else{ // else store the max of max_len and length from first negative after last zeroth index in max_len;
                       max_len = max(max_len,i-last);
                   }
               }
               else{ // if value is neg;
                   neg++; // increament the negative counter;
                   if(neg == 1){ // if this is the first negative index after last zero value index;
                       last = i; // then store the current index in last variable;
                   }
                   length++; // increament the length counter;
                   if(neg%2 == 0){ // if the negative counter is positive;
                       max_len = max(max_len,length); // then store the max of max_len and current length in max_len;
                   }
               }
           }
           return max_len; // return the max_len obtained;
        }
};
