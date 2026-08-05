class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int repeated=-1;
        int missing=-1;
        for(int i=0;i<=n*n;i++){
            int count =0;
            int num=i;
            for(int k=0;k<n;k++){
                for(int l=0;l<n;l++){
                    if(grid[k][l]==num) count++;
                }
            }
            if(count==0) missing=num;
            if(count==2) repeated=num;
        }
        return {repeated,missing};
    }
};
