class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int k=0;k<words.size();k++){
            string cs=words[k];
            int i=0;
            int j=cs.size()-1;
            string rev="";
            for(int l=0;l<cs.size();l++){
                rev=cs[l]+rev;
            }
            if(rev==cs){
                return cs;
            }
        }
        return "";
    }
};