class Solution {
public:
    int beautySum(string s) {
        int beauty=0;
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp.clear();
            for(int j=i;j<s.size();j++){
                char ch =s[j];
                mpp[ch]++;
                int mini=j-i+1;
                int maxi=0;
                for(auto it:mpp){
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }
                beauty=beauty+maxi-mini;
            }
        }
        return beauty;
    }
};