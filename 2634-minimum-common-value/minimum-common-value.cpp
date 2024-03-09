class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(nums1[i]<nums2[j]){
                    break;
                }
                if(nums1[i]==nums2[j]){
                    return nums1[i];
                }
            }
        }
        return -1;
    }
};