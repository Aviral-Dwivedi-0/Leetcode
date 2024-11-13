class Solution {
public:
    bool isPalindrome(string s) {
        string r="";
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                r+=tolower(s[i]);
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
             r+=s[i];
            }
        }
       int front=0;
       int last=r.size()-1;
       while(front<=last){
            if(r[front]!=r[last]){
                return false;
            }
            front++;
            last--;
        }
       return true;
    }
};