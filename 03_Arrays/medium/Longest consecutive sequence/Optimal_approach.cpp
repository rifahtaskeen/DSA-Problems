class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n=nums.size();
        unordered_set<int> mpp;
        for(int i=0;i<n;i++){
            mpp.insert(nums[i]);
        }
        int max_count=1;
        int count=1;
        for(auto x:mpp){
            if(mpp.find(x-1)==mpp.end()){
                count=1;
                while(mpp.find(x+1)!=mpp.end()){
                    count++;
                    x=x+1;
                }
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};
