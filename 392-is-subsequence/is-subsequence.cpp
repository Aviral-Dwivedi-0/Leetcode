class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="" && t=="")return true;
        int check=0;
        int l=s.size();
        for(auto i: t){
            if(i==s[check]){
                check++;
            }
            if(check==l){
                return true;
            }
        }
        return false;
    }
};