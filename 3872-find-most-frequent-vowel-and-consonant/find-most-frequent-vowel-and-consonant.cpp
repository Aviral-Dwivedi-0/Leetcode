class Solution {
public:
    int maxFreqSum(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        int vow_max=0;
        int con_max=0;
        for(int i=0;i<26;i++){
            if(i==0 || i==('e'-'a') || i==('i'-'a') || i==('o'-'a') || i==('u'-'a')){
                vow_max=max(vow_max,hash[i]);
            }
            else{
                con_max=max(con_max,hash[i]);
            }
        }
        return vow_max+con_max;
    }
};