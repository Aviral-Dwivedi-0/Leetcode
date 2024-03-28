class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int l1 = nums1.size();
        int l2 = nums2.size();
        vector<int> merged;
        while (i < l1 || j < l2) {
            if (i < l1 && (j >= l2 || nums1[i] < nums2[j])) {
                merged.push_back(nums1[i]);
                i++;
            } else {
                merged.push_back(nums2[j]);
                j++;
            }
        }
        int l3 = merged.size();
        if (l3 % 2 != 0) {
            return merged[l3 / 2];
        } 
        else {
            return (merged[l3 / 2 - 1] + merged[l3 / 2]) / 2.0;
        }
    }
};