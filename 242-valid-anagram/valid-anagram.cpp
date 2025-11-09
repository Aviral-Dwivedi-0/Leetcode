class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,int> mpp1;
        for(auto i:s){
            mpp1[i]++;
        }
        for(auto i:t){
            mpp1[i]--;
            if(mpp1[i]<0) return false;
        }
        return true;
    }
};