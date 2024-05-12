class Solution {
public:
    string modifyString(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(i==0){
                    char c=s[i+1];
                    if(c!='z')
                    s[i]='z';
                    else
                    s[i]='y';
                }
                else if(i==s.size()-1){
                    char c=s[i-1];
                    if(c!='z')
                    s[i]=char(c+1);
                    else
                    s[i]='y';
                }
                else{
                    char c1=s[i-1];
                    char c2=s[i+1];
                    if(c1!='a' && c2!='a')
                    s[i]='a';
                    else if(c1!='b'&&c2!='b')
                    s[i]='b';
                    else
                    s[i]='c';
                }
            }
        }
        return s;
    }
};