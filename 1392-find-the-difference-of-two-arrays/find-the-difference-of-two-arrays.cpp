class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {  
        int hash1[2001]={0};
        int hash2[2001]={0};
        for(int i=0;i<nums1.size();i++){
            hash1[nums1[i]+1000]++;
        }
        for(int i=0;i<nums2.size();i++){
            hash2[nums2[i]+1000]++;
        }
        vector<int> dis1;
        vector<int> dis2;
        for(int i=0;i<2001;i++){
            if(hash1[i]>0 && hash2[i]==0){
                dis1.push_back(i-1000);
            }
            else if(hash2[i]>0 && hash1[i]==0){
                dis2.push_back(i-1000);
            }
        }
        vector<vector<int>> answer;
        answer.push_back(dis1);
        answer.push_back(dis2);
        return answer;
    }
};