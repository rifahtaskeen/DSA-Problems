class Solution {
  public:
    void mergeArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int left=m-1;
        int right=0;
        int index=0;
        while(left>=0 && right<n){
            if(nums1[left]>=nums2[right]){
                swap(nums1[left],nums2[right]);
                left--,right++;
            }
            else if(nums1[left]<=nums2[right]){
                break;
            }
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
    }
};
