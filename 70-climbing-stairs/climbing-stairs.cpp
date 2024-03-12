class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2){
            return n;
        }
        vector<int> answer;
        answer.push_back(1);
        answer.push_back(2);
        for(int i=3;i<=n;i++){
            answer.push_back(answer[i-2]+answer[i-3]);
            if(i==n){
                return answer[n-1];
            }
        }
        return 0;
    }
};