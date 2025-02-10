class Solution {
public:
    string clearDigits(string s) {
        int i=0;
        while(i<s.size()){
            if(s[i]<=58 && s[i]>=48){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i-1);
                i-=2;
            }
            i++;
        }
        return s;
    }
};