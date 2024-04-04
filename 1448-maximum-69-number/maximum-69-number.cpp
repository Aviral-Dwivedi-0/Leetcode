class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='6' and count==0){
                s[i]='9';
                count++;
            }
        }
        return stoi(s);
    }
};