class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> answer;
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        int k=0;
        vector<int> temp;
        while(i<n && j<m){
            if(nums1[i][0]==nums2[j][0]){
                // answer[k].push_back(nums1[i][0]);
                // answer[k].push_back(nums1[i][1]+nums2[j][1]);
                temp.push_back(nums1[i][0]);
                temp.push_back(nums1[i][1]+nums2[j][1]);
                answer.push_back(temp);
                temp.pop_back();
                temp.pop_back();
                cout<<answer[k][0]<<","<<answer[k][1]<<endl;;
                k++;
                i++;
                j++;
            }
            else if(nums1[i][0]<nums2[j][0]){
                answer.push_back(nums1[i]);
                i++;
            }
            else{
                answer.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            answer.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            answer.push_back(nums2[j]);
            j++;
        }
        return answer;
    }
};