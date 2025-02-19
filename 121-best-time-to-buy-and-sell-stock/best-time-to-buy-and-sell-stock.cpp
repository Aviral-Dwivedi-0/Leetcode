class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimal=prices[0];
        int answer=INT_MIN;
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minimal;
            answer=max(answer,profit);
            minimal=min(minimal,prices[i]);
        }
        if (answer<0) return 0;
        return answer;
    }
};