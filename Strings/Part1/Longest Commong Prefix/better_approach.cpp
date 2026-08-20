class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(int i=0;i<strs.size();i++){//going through each character of the first string in the array .
        int j=0;
        while(j<res.size() && j<strs[i].size() && res[j]==strs[i][j]) j++;
        /*checking if j is less than size of the first string ,size of the current string and the character at j position in the first string is equal to the character at j position in string at postion i of the array*/
        res=res.substr(0,j);
        if(res.empty()) return "";
        }
        return res;
    }
};
