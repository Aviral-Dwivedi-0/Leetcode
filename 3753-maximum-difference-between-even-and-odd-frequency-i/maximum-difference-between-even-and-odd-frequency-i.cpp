class Solution {
public:
    int maxDifference(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        int max_odd=0;
        int mini_even=INT_MAX;
        for(int i=0;i<26;i++){
            if(hash[i]%2==0 && hash[i]!=0){
                mini_even=min(mini_even,hash[i]);
            }
            else{
                max_odd=max(max_odd,hash[i]);
            }
        }
        return max_odd-mini_even;
    }
};