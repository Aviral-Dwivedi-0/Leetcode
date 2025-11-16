class Solution {
public:
    int myAtoi(string s) {
        if(s[0]==' '){
            int first=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]!=' '){
                    first=i;
                    break;
                }
            }
            s.erase(0,first);
        }
        bool negative=0;
        if(s[0]=='-' || s[0]=='+'){
            if(s[0]=='-')
            negative=true;
            s.erase(0,1);
        }
        
        if(s[0]==0){
            int first=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]!=0){
                    first=i;
                    break;
                }
            }
            s.erase(0,first);
        }
        long long answer=0;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'>9 || s[i]-'0'<0) break;
            else{
                answer*=10;
                if(answer>INT_MAX) break;
                answer+=s[i]-'0';
            }
        }
        if(negative) answer= answer*-1;
        if(answer<INT_MIN) return INT_MIN;
        if(answer>INT_MAX) return INT_MAX;
        return answer;
    }
};