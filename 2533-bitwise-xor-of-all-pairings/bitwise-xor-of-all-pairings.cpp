class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int answer = 0;
        // for (int i = 0; i < nums1.size(); i++) {
        //     for (int j = 0; j < nums2.size(); j++) {
        //         answer ^= (nums1[i] ^ nums2[j]);
        //     }
        // }
        // return answer;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            if(n%2!=0){
                answer^=nums1[i];
            }
        }
        for(int j=0;j<n;j++){
            if(m%2!=0){
                answer^=nums2[j];
            }
        }
        return answer;
    }
};