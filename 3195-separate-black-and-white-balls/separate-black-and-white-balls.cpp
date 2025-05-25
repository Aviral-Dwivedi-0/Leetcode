class Solution {
public:
    long long minimumSteps(string s) {
        int black=0;
        int white=0;
        int counter=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                black++;
            }
            else
            white++;
        }
        int curr=0;
        long long answer=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                answer+=i-curr;
                curr++;
            }
        }
        return answer;
        
    }
};