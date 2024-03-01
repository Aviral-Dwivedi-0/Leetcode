class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=count(s.begin(),s.end(),'1');
        int l=s.length();
        for(int i=0;i<l-1;i++){
            if(c>1){
                s[i]='1';
                c--;
            }
            else{
                s[i]='0';
            }
        }
        s[l-1]='1';
        return s;
    }
};