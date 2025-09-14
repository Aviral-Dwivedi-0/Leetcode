class Solution {
public:
    bool isIsomorphic(string s, string t) {
        set<char> visited;
        map<char,char> mpp;
        for(int i=0;i<s.size();i++){
            cout<<0;
            if(mpp.find(s[i]) != mpp.end()){
                if(mpp[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                if(visited.find(t[i]) != visited.end()) return false;
                mpp[s[i]]=t[i];
                visited.insert(t[i]);
                // if(mpp.find(t[i])!= mpp.end() && mpp[t[i]]!=s[i]) return false;
                // mpp[t[i]]=s[i];
            }
        }
        return true;
    }
};