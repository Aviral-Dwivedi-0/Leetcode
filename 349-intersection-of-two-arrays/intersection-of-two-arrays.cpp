class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> answer;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    answer.push_back(nums1[i]);
                    break;
                }
            }
        }
        unordered_set<int> answer1(answer.begin(),answer.end());
        return vector<int>(answer1.begin(),answer1.end());
    }
};