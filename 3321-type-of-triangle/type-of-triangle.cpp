class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]==nums[1] && nums[1]==nums[2]) return "equilateral";
        int a=nums[0];
        int b=nums[1];
        int c=nums[2];
        if(a+b>c && b+c>a && c+a>b){
            if(a==b || b==c || c==a) return "isosceles";
            return "scalene";
        }
        return "none";
    }
};