class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int max_count=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int count=1;
            int element=nums[i];
            for(int j=i+1;j<n;j++){
                if(element+1==nums[j]){
                    element=element+1;
                    count++;
                }
                else if(element==nums[j]) continue;
                else{
                    break;
                }
            }
            max_count=max(max_count,count);
        }
        return max_count;
    }
};
