class Solution {
public:
    string greatestLetter(string s) {
        string a;
        int hash[128]={0};
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
        }
        for(int j=122; j>=97; j--){
            if(hash[j]>0 && hash[j-32]>0){
                a = (char)(j-32);
                break;
            }
        }
        return a;
    }
};
