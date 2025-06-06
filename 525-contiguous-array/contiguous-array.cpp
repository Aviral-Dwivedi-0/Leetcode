class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) nums[i]=-1;
        }
        for(auto i:nums){
            cout<<i<<" "<<endl;
        }cout<<endl;
        unordered_map<int,int> m;
        int sum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            if(sum==0){
                maxi=max(maxi,i+1);
            }
            else{
                if(m.find(sum)!=m.end()){
                    maxi=max(maxi,i-m[sum]);
                }
                else{
                    m[sum]=i;
                }
            }
        }return maxi;
    }
};