class Solution {
  public:
    int minVal(int a, int b) {
        // Let's try to understand problem statement first , we are ordred to find the value x such that the xor of x and a is minimum possible when number of set bits in x is equal to that of b;
        // If both bits of any number is equal the xor of them will be 0 else if they are different the xor will be 1;
        // As we need to minimize the xor we will try to make set bits of x in same index to that of a;
        int bitb = 0; // variable bitb initialized to 0 will count the number of set bits in b;
        while(b){
            if(b%2) bitb++; // if b modulo 2 is 1 that is the bit is set we will increase the bitb by 1;
            b/=2; // halving the value b to get the next bit;
        }
        int y = a; // to count the set bits in a we are storing the value of y in a;
        int bita = 0; // variable bita initialized to 0 will count the number of set bits in a;
        while(y){ // same as for b;
            if(y%2)bita++;
            y/=2;
        }
        if(bita == bitb) return a; // if no of set bits in a and b are equal we will return a itself because a XOR a is 0 which is minimum;
        if(bita > bitb){ // else if no of set bits in a are greater than that of b;
            y = bita-bitb; // calculating the difference in no. of bits;
            // as no of set bits in b is less than a , the no of set bits in our answer will also be less than a and to make sure that the xor of answer value and value a remains minimum we will reduce y no of firstly occuring set bits from a;
            // because if we will remove the set bits from front the xor answer with a will become larger;
            int x = 1; // initializing a variable x with value 1 , it will be used to get the index of set bit in a;
            while(y){ // the loop will run until the y no of firstly occuring set bit is not changed to unset bit;
                if(a&x){ // using & bitwise operator it will return non zero value if both the bits are set;
                    a-=x; // and if this is the case we will reduce the value of a by x which is equivalent to making the bit unset;
                    y--; // decrementing the value y as one bit is now unset;
                }
                x<<=1; // using a right shift operator to right shift value of x by 1 each time to check each bit of a;
            }
            return a; // returning the value of a obtained after performing the operation;
        }
        else{ // the last case is if no of set bits in b are greater to that of a;
            y = bitb-bita; // calculating the difference in no. of bits;
            // in this case we will change the y firstly occuring unset bits of a to set because we need to equzlize the number of set bits;
            // we are changing the firstly occuring set bits because if we do so from front the XOR of answer with value a will become large which is not to be done;
            int x = 1; // initializing a varable x with value 1 , it will be used to get the index of set bit in a;
            while(y){ // running the loop until the y no of firstly occuring unset bits are not changed to set bits;
                if(!(a&x)){ // if a&x will return 0 i.e. the bit is unset;
                    a+=x; // we will increase the value of a by x which is equivalent to changing the bit to set;
                    y--; // decrementing y by 1;
                }
                x<<=1; // shifting the set index of x to right by 1;
            }
            return a; // returning the answer obtained;
        }
        // Done And Dusted;
    }
};
