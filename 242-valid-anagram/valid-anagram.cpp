class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26]={0};
        int goal[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        for(int j=0;j<t.size();j++){
            goal[t[j]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=goal[i]) return false;
        }
        return true;
    }
};