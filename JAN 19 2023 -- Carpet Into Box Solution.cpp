class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        if(C>D){ // we will make sure that C always remains equal or smaller to D;
            swap(C,D); // so as to ease the code;
        }
        int move = 0; // it will count the number of moves;
        while(1){ // the infinite while loop that will run until the result is not found;
            if(A>B){ // again for ease of code we will always make sure that A is either equal or smaller than B;
                swap(A,B);
            }
            if(A>D){ // if A is greater than D then B is for sure greater than D , so we will half both A and B ;
                A/=2;
                B/=2;
                move+=2;// and will increament the moves count by 2;
                continue;
            }
            if(A<=C){ // else if A is within range of C;
                if(B<=D){// and B is also in range of D ;
                    return move;//we will return the move count;
                }
                else{
                    B/=2; // else the value of B will be halved ;
                    move++; // and move will be increamented;
                }
            }
            else{ // if none of other condition is true then the possibility is that
                if(B<=D){ // A is greater than C but is in range of D , so we will check if B can be fitted in D;
                    A/=2; // if it is true the value of A will be halved to make it fit for C;
                    move++; // and the move counter will be increamented;
                }
                else{ // else if B is greater than D;
                    B/=2; // the value of B will be halved;
                    move++; // and the move counter will be increamented by one;
                }
            } 
        }
        // we can also set while loop to run until none of the value A and B is 0;
    }
};
