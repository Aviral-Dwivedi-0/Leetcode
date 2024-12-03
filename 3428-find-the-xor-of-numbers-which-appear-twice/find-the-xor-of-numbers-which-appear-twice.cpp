class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int answer;
        int hash[51]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<51;i++){
            if(hash[i]>1){
                answer^=i;
            }
        }
        return answer;
    }
};