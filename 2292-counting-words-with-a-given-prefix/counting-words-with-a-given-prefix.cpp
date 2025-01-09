class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        int n=pref.size();
        for(auto i: words){
            if(i.size()<n) continue;
            else{
                for(int j=0;j<n;j++){
                    if(pref[j]!=i[j]){
                        break;
                    }
                    if (j==n-1) count++;
                }
            }
        }
        return count;
    }
};