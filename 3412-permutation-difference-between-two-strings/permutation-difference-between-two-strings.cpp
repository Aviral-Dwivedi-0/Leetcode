class Solution {
public:
    int findPermutationDifference(string s, string t) {
       int hash[26]={0};
       for(int i=0;i<s.size();i++){
        hash[s[i]-'a']=i;
       }
       for(int i=0;i<t.size();i++){
        hash[t[i]-'a']=abs(hash[t[i]-'a']-i);
       }
       int difference=0;
       for(int i=0;i<26;i++){
        difference+=hash[i];
       }
       return difference;
    }
};