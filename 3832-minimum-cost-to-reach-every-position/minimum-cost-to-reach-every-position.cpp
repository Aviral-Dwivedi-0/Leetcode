class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int mini=cost[0];
        for(int i=0;i<cost.size();i++){
            if(cost[i]<mini){
                mini=cost[i];
            }
            else{
                cost[i]=mini;
            }
        }
        return cost;
    }
};