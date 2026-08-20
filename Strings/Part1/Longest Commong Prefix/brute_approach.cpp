class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs[0].size();i++){//going through each character of the first string in the array .
            char ch=strs[0][i];//allocating the current character of the first string.
            for(int j=0;j<strs.size();j++){//going through each string in the array
                /*checking if first string length is exceeding the current string size or checking if the current character of the current string is not equal to character in the same position in first string */
                if(i>=strs[j].size() || strs[j][i]!=ch )  
                return res;
            }
            //else add the character to the resulting string 
            res+=ch;
        }
        return res;
    }
};
