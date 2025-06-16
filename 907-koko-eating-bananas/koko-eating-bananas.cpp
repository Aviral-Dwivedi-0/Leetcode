class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int limit=*max_element(piles.begin(),piles.end());
        int low=1;
        int high=limit;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hours=0;
            for(int i=0;i<piles.size();i++){
                hours+=ceil((double)piles[i]/(double)mid);
            }
            if(hours<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};