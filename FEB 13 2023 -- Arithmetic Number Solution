class Solution{
public:
    int inSequence(int A, int B, int C){
        //Really an Easy Question;
        if(A == B) return 1; // if numbers are already equal return true;
        int diff = A-B; // now store the difference of A with B;
        if(diff > 0){ // if diff is (+) i.e. A is greater than B ;
            if(C<0){ // then only if C is (-) we will check further;
                B-=A; // now reduce the value A from B;
                // now B will be negative and as do C;
                if(B%C == 0)return 1; // if B mod C (both -) is zero return true;
                else return 0; // else return false;
            }
            else{// else return false;
                return 0;
            }
        }
        else{ // if diff is (-) i.e. B is greater than A;
            if(C>0){// then only if C is (+) we will check further;
                B-=A; // now reduce the value A from B;
                if(B%C == 0)return 1; // if B mod C (both num +)is zero return true;
                else return 0;// else return false;
            }
            else{//else return false;
                return 0;
            }
        }
    }
};
