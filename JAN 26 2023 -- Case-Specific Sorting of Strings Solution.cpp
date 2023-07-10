class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int> v(n); // vector v will store the position of uppercase character in the string and rest of the index will be index of lowercase characters;
        vector<int> pos(26); // vector pos will store all the lowercase characters in the string;
        vector<int> pos2(26);// similarly pos2 will store all the uppercase characters in the string;
        for(int i = 0; i<n ; i++){// traversing the array to get all the required fields;
            if((int)str[i] >= 65 && (int)str[i]<=90){ // if str[i] is uppercase be will increment v[i] by 1 i.e. an uppercase character is present in this index and will also store the characters in pos2;
                v[i]++;
                pos2[str[i]-'A']++;
            }
            else{// else we will store the character in pos;
                
            pos[str[i]-'a']++;
            }
        }
        int j = 0 , k = 0; // j will keep track of index of uppercase character and k will keep track of lowercase character;
        for(int i = 0; i<n ; i++){ // traversing the string again to update it with new values;
            if(v[i]){// v[i] will be 1 if there is an uppercase character in the original string in this index;
                while(!pos2[j]){ //we will increament the value of j by 1 until pos2[j] will not have positive number;
                    j++;
                }
                str[i] = char(j+65); // now we will store the value of j find in the form of character in string , here 65 is added because int value of A is 65;
                pos2[j]--; // and will decrement pos2[j] by 1 which means we have used one character stored here;
            }
            else{ // else if given index  i contains a lowercase characater;
                while(!pos[k]){ // we will follow the same path as done above ;
                    k++;
                }
                str[i] = char(k+97); // here be will add 97 because int value of 'a' is 97;
                pos[k]--;
            }
        }
        return str; // returning the string so obtained;
    }
};
