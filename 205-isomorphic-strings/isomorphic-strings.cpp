class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_set<char> visited;
        unordered_map<char,char> mpp;
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i]) != mpp.end()){
                if(mpp[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                if(visited.find(t[i]) != visited.end()) return false;
                mpp[s[i]]=t[i];
                visited.insert(t[i]);
            }
        }
        return true;
    }
};