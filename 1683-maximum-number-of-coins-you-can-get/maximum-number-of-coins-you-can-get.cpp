class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int bob=0;
        int alice=piles.size()-1;
        int me=alice-1;
        int max=0;
        while(me>bob){
            max+=piles[me];
            me-=2;
            alice-=2;
            bob+=1;
        }
        return max;
    }
};