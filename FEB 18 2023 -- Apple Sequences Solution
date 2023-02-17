class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        // to solve the question we will be using two pointers algorithm where one pointer will be storing the index of first 'O' value and second will store the current index;
        int j = -1; // j will be storing the index where the first 'O' for current streak is appeared;
        int mc = 0; // mc is m count it will count the current spells;
        int cur = 0 , maxy = 0; // cur will store the current length , maxy will store the maximum length achievable;
        for(int i = 0; i<n ; i++){ // traverse the array from 0th index;
            if(arr[i] == 'O'){ // if the current index stores 'O';
                if(mc < m){ // firstly check if we can use our spell i.e. the value mc is small than m;
                    if(mc == 0){ // if the current spell is our first one we will store its index in j;
                        j = i;
                    }
                    mc++; // increament the spell counter;
                    cur++; // increament the current length counter;
                }
                else{ // if the value of mc is equal to m , we will remove the values upto index j i.e the index where the first 'O' is obtained because the one mc value will now be used for current index;
                    cur = i-j; // firstly modify the current length by (i - j - 1 + 1) i.e i-j;
                    j++; // increament the j counter by one to move it to next index;
                    while(j<n && arr[j] != 'O'){ // the loop will iterate until the next new first 'O' index is not found;
                        j++;
                    }
                }
            }
            else{ // else if arr[i] is 'A';
                cur++; //increament the current length counter cur;
            }
            maxy = max(cur,maxy); // store the max of maxy and current length in maxy;
        }
        return maxy;// return the maximum length obtained;
    }
};
