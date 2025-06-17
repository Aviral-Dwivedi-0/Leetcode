class Solution {
public:
    int required(vector<int>& weights,int mid){
        int day=1,capacity=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+capacity>mid){
                day++;
                capacity=weights[i];
            }
            else{
                capacity+=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high=0;
        for(int i=0;i<weights.size();i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int req_days=required(weights,mid);
            if(req_days<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};