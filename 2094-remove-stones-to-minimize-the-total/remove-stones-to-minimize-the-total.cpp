class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int sum=0;
        map<int,int> m;
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
            m[piles[i]]++;
        }
        while(k--){
            auto it=--m.end();
            int rk=it->first;
            int toRemove = (rk) / 2; 
            int modified = rk - toRemove;

            sum -= toRemove;

            m[rk]--;
            if (m[rk] == 0) {
                m.erase(rk);
            }
            m[modified]++;
        }
        return sum;
    }
};