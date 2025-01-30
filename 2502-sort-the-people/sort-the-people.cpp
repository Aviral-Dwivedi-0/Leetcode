class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> order;
        
        for (int i = 0; i < heights.size(); i++) {
            order.push_back({heights[i], names[i]});
        }
        sort(order.rbegin(), order.rend());

        vector<string> answer;
        for (auto& p : order) {
            answer.push_back(p.second);  
        }

        return answer;
    }
};