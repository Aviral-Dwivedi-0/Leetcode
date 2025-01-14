class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=0;
        int l=nums.size()-1;
        int fi=-1;
        int li=-1;
        while(f<=l){
            int mid=f+(l-f)/2;
            if(nums[mid]==target){
                // if(nums[mid-1]!=target){
                fi=mid;
                // }
                // else{
                    l=mid-1;
                //     continue;
                //}
            }
            else if(nums[mid]<target){
                f=mid+1;
            }
            else{
                l=mid-1;
            }
        }
        vector<int> answer;
        answer.push_back(fi);
        f=0;
        l=nums.size()-1;
        while(f<=l){
            int mid=f+(l-f)/2;
            if(nums[mid]==target){
                // if(nums[mid+1]!=target){
                li=mid;
                // }
                // else{
                    f=mid+1;
                //     continue;
                //}
            }
            else if(nums[mid]<target){
                f=mid+1;
            }
            else{
                l=mid-1;
            }
        }
        answer.push_back(li);
        return answer;
    }
};