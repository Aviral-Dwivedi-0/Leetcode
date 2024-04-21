class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<s.size();i++){
            if((count(s.begin(),s.end(),s[i]))!=(count(t.begin(),t.end(),s[i]))){
                return s[i];
            }
        }
        return t[t.size()-1];     
    }
};