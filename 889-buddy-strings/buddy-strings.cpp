class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int diff=0;
        if(s.size()!=goal.size()) return false;
        int hashS[256]={0};
        int hashGoal[256]={0};
        for(int i=0;i<s.size();i++){
            hashS[s[i]]++;
            hashGoal[goal[i]]++;
        }
        for(int i=0;i<256;i++){
                if((hashS[i]!=hashGoal[i])) return false;
            }
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                diff++;
                if(diff>2) return false;
            }
        }
        if(diff==1) return false;
        if(diff==0){
            for(int i=0;i<256;i++){
                if(hashS[i]>=2 ) return true;
            }
        }
        if(diff==2) return true;
        return false;
    }
};