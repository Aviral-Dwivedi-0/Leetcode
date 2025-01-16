class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer;
        int i=0;
        while(i<=n){
            int count=__builtin_popcount(i);
            answer.push_back(count);
            i++;
        }
        return answer;
    }
};