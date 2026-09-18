class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int longest=1;
        int last_small=nums[0];
        int count=1;
        for(int i=0;i<n;i++){
            if(nums[i]==last_small) continue;
            else if(last_small+1==nums[i]){
                count++;
                last_small=nums[i];
            }
            else{
                count=1;
                last_small=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
