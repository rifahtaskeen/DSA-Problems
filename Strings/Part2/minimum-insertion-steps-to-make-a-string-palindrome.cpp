class Solution {
public:
    int solve(int i,int j,string &s,vector<vector<int>>&dp){
        if(i>=j) return 0;//checks if 0 or no string is present 
        if(dp[i][j]!=-1) return dp[i][j];//if there exists a value return 
        if(s[i]==s[j]){//if the characters are equal then calculate for the next values
            return dp[i][j]=solve(i+1,j-1,s,dp);
        }
        return dp[i][j]=1+min(solve(i+1,j,s,dp),solve(i,j-1,s,dp));//if the characters are not equal then calculate the possible solution by trying to check two possibilites
    }
    int minInsertions(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1)); //creating a n x n dimensional vector
        return solve(0,n-1,s,dp);
    }
};
