class Solution {
public:
    bool checkIfPangram(string sentence) {
        int hash[128]={0};
        for(auto i: sentence){
            hash[i]++;
        }
        for(int i=97;i<=122;i++){
            if(hash[i]==0) return false;
        }
        return true;
    }
};