class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int orientation=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='R'){
                orientation++;
            }
            else if(s[i]=='L'){
                orientation--;
            }  
            if(orientation==0){
                count++;
            }
        }
        return count;
    }
};