class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int hash1[101]={0};
        int hash2[101]={0};
        int hash3[101]={0};
        for(int i=0;i<nums1.size();i++){
            hash1[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            hash2[nums2[j]]++;
        }
        for(int k=0;k<nums3.size();k++){
            hash3[nums3[k]]++;
        }
        vector<int> answer;
        for(int i=0;i<=100;i++){
            if((hash1[i]>0 && hash2[i]>0)||(hash1[i]>0 && hash3[i]>0)||(hash3[i]>0 && hash2[i]>0)){
                answer.push_back(i);
            }
        }
        return answer;
    }
};