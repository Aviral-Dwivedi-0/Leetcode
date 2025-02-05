class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return true;
        int l1=s1.size()-1;
        int l2=s2.size()-1;
        if(l1!=l2) return false;
        vector<int> diff1;
        vector<int> diff2;
        for(int i=0;i<=l1;i++){
            if(s1[i]!=s2[i]){
                diff1.push_back(s1[i]);
                diff2.push_back(s2[i]);
            }
        }
        if(diff1.size()==2 && diff2.size()==2){
            if(diff1[0]==diff2[1] && diff1[1]==diff2[0]){
                return true;
            }
        }
        return false;
    }
};