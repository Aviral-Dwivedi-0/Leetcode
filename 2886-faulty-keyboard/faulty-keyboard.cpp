class Solution {
public:
    string finalString(string s) {
        string r="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='i'){
                reverse(r.begin(),r.end());
            }
            else{
                r+=s[i];
            }
        }
        return r;
    }
};