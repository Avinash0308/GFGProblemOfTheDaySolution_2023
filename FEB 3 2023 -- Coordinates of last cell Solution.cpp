class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix){
        //code here
        int k = 0; // k will direct the index of matrix according to statement;
        // if k = 0 , it will represent right;
        // if k = 1 , it will represent left;
        // if k = 2 , it will represent up;
        // if k = 3 , it will represent down;
        int n = matrix.size() , m = matrix[0].size(); // n is storing the row size & m is storing the column size;
        int i = 0 , j = 0; // i and j will be used to traverse the matrix;
        int last1 = -1 , last2 = -1; // last1 will store the last index of i and last2 will store the last index of j;
        while(i>= 0 && j>= 0 && i<n && j<m){ // running the loop until all the givn conditions are true;
            last1 = i; // firstly storing the current indexes in last1 and last2;
            last2 = j;
            if(matrix[i][j] == 0){ // if matrix[i][j] is 0 , then according to ques we will continue in same direction in which we are currently traversing;
                if(k == 0){ // if right then j++;
                    j++;
                }
                else if(k == 1){ // if left then j--;
                    j--;
                }
                else if(k == 2){// if up then i--;
                    i--;
                }
                else{ // else down then i++;
                    i++;
                }
            }
            else{// if matrix[i][j] is one;
                matrix[i][j] = 0;// then firstly make it zero as stated;
                if(k == 0){ // if currently we are moving to right;
                    i++; // then change direction to down i.e. i++;
                    k = 3; // and setting the direction to right;
                }
                else if(k == 1){ // on the same way if we are travelling to left then change the direction to up;
                    i--; // by decresing the value of i by 1;
                    k = 2;// and set the direction to up;
                }
                else if(k == 2){ // if we are moving in upward direct then change to right;
                    k = 0; // and set the direct to 0 i.e. right;
                    j++; // increament the index of j;
                }
                else{// else we are in downward direction so change it to left;
                    j--; // by decrementing the j;
                    k = 1; // set current direction to left;
                }
            }
        }
        pair<int,int> p = {last1,last2}; // construct a pair of last1 and last2 i.e. our answer;
        return p; //return the pair of index;
        //done and dusted!!!!!!;
    }

};
