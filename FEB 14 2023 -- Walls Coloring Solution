class Solution{   
public:
    int minCost(vector<vector<int>> &colors, int N) {
        // Write your code here.
        vector<int> x(N) , y(N) , z(N); // create three vectors each will store the one combination out of three possible to paint the house;
        x[0] = colors[0][0]; // store the cost to paint individual house with given color in the first index of each vector;
        y[0] = colors[0][1];
        z[0] = colors[0][2];
        for(int i = 1; i<N ; i++){// run a loop from index 1 to last;
        // Now for every color combination find the min of remaining two colors previous values and add it to current color cost and store it in the current index;
        // Follow the above step for all three colors;
            x[i] = min(y[i-1],z[i-1]) + colors[i][0];
            y[i] = min(x[i-1],z[i-1]) + colors[i][1];
            z[i] = min(x[i-1],y[i-1]) + colors[i][2];
        }
        return min(x[N-1],min(y[N-1],z[N-1])); // Now after all the index are formed return the minimum of all three vectors last index;
    }
};
