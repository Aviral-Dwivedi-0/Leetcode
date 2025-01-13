class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double answer=50;
        sort(nums.begin(),nums.end());
        int first=0;
        int last=nums.size()-1;
        while(first<last){
            double avg=(double)(nums[first]+nums[last])/2;
            answer=min(avg,answer);
            first++;
            last--;
        }
        return answer;
    }
};