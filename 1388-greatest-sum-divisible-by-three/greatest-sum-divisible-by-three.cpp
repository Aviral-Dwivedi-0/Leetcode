class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
       int sum=0;
       vector<int> ones;
       vector<int> twos;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(nums[i]%3==0){
            sum+=nums[i];
        }
        else if(nums[i]%3==1){
            sum+=nums[i];
            ones.push_back(nums[i]);
        }
        else{
            sum+=nums[i];
            twos.push_back(nums[i]);
        }
       } 
        if(sum%3==0) return sum;
        else if(sum%3==1){  
            if(ones.size()>0 && twos.size()>=2){
                if(ones[0]>=twos[1]+twos[0]){
                    sum-=(twos[0]+twos[1]);
                }
                else{
                    sum-=ones[0];
                }
                return sum;
            }
            else if(ones.size()>0){
                return sum-=ones[0];
            } 
            else return sum-(twos[0]+twos[1]);
        }
        else{
            if(ones.size()>1 && twos.size()>0){
                if(ones[0]+ones[1]<twos[0]){
                    sum-=ones[0]+ones[1];
                }
                else{
                    sum-=twos[0];
                }
                return sum;
            }
            else if(twos.size()>0){
                return sum-=twos[0];
            }
            else return sum-(ones[0]+ones[1]);
        }
       return sum;
    }
};