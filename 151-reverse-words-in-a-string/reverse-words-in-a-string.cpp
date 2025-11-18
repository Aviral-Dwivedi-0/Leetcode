class Solution {
public:
    string reverseWords(string s) {
        int t=s.size();
        if(s[0]==' ' || s[t-1]==' ' ){
            while(s[0]==' '){
                s=s.substr(1,s.size());
            }
            int l=s.size();
            while(s[l-1]==' '){
                s=s.substr(0,l-1);
                l--;
            }
        }
        int nl=s.size();
        string word="";
        string answer="";
        for(int i=nl-1;i>=0;i--){
            if(s[i]!=' '){
                word=s[i]+word;
            }
            else if(s[i+1]!=' '){
                answer+=word+" ";
                word="";
            }
        }
        return answer+word;
    }
};