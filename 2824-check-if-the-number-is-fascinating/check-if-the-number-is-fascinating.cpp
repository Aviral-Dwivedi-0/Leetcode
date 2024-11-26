class Solution {
public:
    bool isFascinating(int n) {
        int mul2=2*n;
        int mul3=3*n;
        string s=to_string(n);
        s+=to_string(mul2);
        s+=to_string(mul3);
        if(s.size()!=9) return false;
        int hash[9]={0};
        for(int i=0;i<9;i++){
            if(s[i]=='0') return false;
            hash[s[i]-'1']++;
        }
        for(int i=0;i<9;i++){
            if(hash[i]!=1) return false;
        }
        return true;
    }
};