class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string cp=strs[0];
        for(auto i: strs){
            for(int j=0;j<cp.size();j++){
                if(i[j]!=cp[j]){
                    cp=cp.substr(0,j);
                    break;
                }
            }
        }
        return cp;
    }
};