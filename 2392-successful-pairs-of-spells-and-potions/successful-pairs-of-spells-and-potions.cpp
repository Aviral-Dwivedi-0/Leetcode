class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int ps=potions.size();
        int ss=spells.size();
        sort(potions.begin(),potions.end());
        vector<int> answer;
        for(int i=0;i<ss;i++){
            double req= (double)success/spells[i];
            auto it=lower_bound(potions.begin(),potions.end(),req);
            int tbp=it-potions.begin();
            answer.push_back(ps-tbp);
        }
        return answer;
    }
};