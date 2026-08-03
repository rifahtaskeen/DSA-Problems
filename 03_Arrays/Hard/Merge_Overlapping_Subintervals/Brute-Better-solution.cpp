class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n=arr.size();
        int count=0;
        unordered_map<int,int> mpp;
        int xr=0;
        mpp[xr]++;
        for(int i=0;i<n;i++){
            xr=xr^arr[i];
            int x=xr^k;
            count+=mpp[x];
            mpp[xr]++;
        }
        return count;
    }
};
