class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long n=bloomDay.size();
        if(n<(long long)m*(long long)k) return -1;
        // int high=*max_element(bloomDay.begin(),bloomDay.end());
        // int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=INT_MIN;
        int low=INT_MAX;
        for(int i:bloomDay){
            if(i>high) high=i;
            if(i<low) low=i;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int canmake=0;
            int sum=0;
            for(int i=0;i<n;i++){
                if(mid>=bloomDay[i]){
                    sum++;
                    if(sum==k){
                        canmake++;
                        sum=0;
                        if(canmake==m){
                            high=mid-1;
                            break;
                        }
                    }
                } 
                else{
                    sum=0;
                }
            }
            if(canmake!=m){
                low=mid+1;
            }
        }
        return low;
    }
};