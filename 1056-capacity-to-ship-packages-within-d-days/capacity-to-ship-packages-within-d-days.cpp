class Solution {
public:
    int required(vector<int>& weights,int mid){
        int day=1,capacity=0;
        for(int i=0;i<weights.size();i++){
            capacity+=weights[i];
            if(capacity>mid){
                day++;
                capacity=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int req_days=required(weights,mid);
            if(req_days<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};