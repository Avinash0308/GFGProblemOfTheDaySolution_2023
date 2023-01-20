class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      //Let's firstly try to understand the question . In laymen word the question states that we need to find the index which is pointed by other index having some of there index value maximum than others and if the sum is equal we need to consider the greatest index;
      vector<vector<int>> v(N); // For doing so I've created a 2d vector in which each index will contain vector of index pointing to it;
      for(int i = 0; i<N ; i++){ // Now , I'm traversing the whole array to get all the required indexes;
          if(Edge[i] != -1){ // if value of edge[i] is not -1 i.e. it is pointing to some index , we will store this index in vector of index whom it is pointing;
              v[Edge[i]].push_back(i);
          }
      } //Now as I've a 2d array of all the index pointing to given index , I'll traverse the 2d array and find the index having sum of pointing index maximum;
      int max = -1; // declairing a max varialbe having default value -1, it will store the max sum of indexes;
      int ind = -1; // declairing a ind variable having default value =1, it will store the index having sum of pointing index maximum;
      for(int i = 0; i<N ; i++){// traversing each index of 2d array ;
          int n = v[i].size(); // (optional step) declairing a n variable , it will store the size of v[i] array , you can directly use v[i].size() instead of it;
          int val = 0; // declairing a val variable , it will store the sum of all indexes of current vector;
          for(int j = 0; j<n ; j++){ // traversing the current vector v[i];
              val += v[i][j]; // adding the value of each pointing index to the val variable;
          }
          if(val >= max){ // if the val obtained is greater than or equal to current max we will store val in max and the value of ind will be updated with current index i;
              max = val; //we are accepting the equal sum val also because we need to return the max index if the sum of pointing indexes are same;
              ind = i;
          }
      }
      return ind; // returning the index ind found;
      // done and dusted;
  }
};
