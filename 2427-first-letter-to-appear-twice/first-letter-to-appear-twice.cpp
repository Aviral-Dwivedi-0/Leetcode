class Solution {
public:
    char repeatedCharacter(string s) {
        int hash[128]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
            if(hash[s[i]]==2){
                return s[i];
            }
        }
        return 'a';
    }
};