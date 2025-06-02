class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=s.size();
        bool word=false;
        int counter=0;
        for(int i=length-1;i>=0;i--){
            if(!word && s[i]!=' ') {
                word=true;
                counter++;
            }
            else if(word && s[i]!=' '){
                counter++;
            }
            else if(word && s[i]==' '){
                break;
            }
        }
        return counter;
    }
};