class Solution {
public:
    int longestPalindrome(string s) {
        int max=0;
        int hash[2001]={0};
        bool single=false;
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }
        for(int j=0;j<2001;j++){
            if(hash[j]%2==0){
                max+=hash[j];
            }
            else if(hash[j]%2!=0 && single==false){
                max+=hash[j];
                single=true;
            }
            else {
                max+=hash[j]-1;
            }
        }
        return max;
    }
};