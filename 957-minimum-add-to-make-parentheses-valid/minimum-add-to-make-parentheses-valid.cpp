class Solution {
public:
    int minAddToMakeValid(string s) {
        // int fc=0;
        // int pc=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]=='(') fc++;
        //     else pc++;
        // }
        // return abs(pc-fc);
        int forward=0;
        int backward=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') forward++;
            else if(s[i]==')' && forward>0) forward--;
        }
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]==')') backward++;
            else if(s[j]=='(' && backward>0) backward--;
        }
        return forward+backward;
    }
};