class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        // code here
        int count=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j && arr[i]>arr[j]) count++;
            }
        }
        return count;
    }
};
