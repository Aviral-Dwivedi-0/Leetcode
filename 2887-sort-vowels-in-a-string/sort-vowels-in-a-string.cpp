class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        int len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowels.push_back(s[i]);
                s[i]=' ';
            }
        }
        int l=vowels.size();
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<len;i++){
            if(s[i]==' '){
                s[i]=vowels[0];
                vowels.erase(vowels.begin());
            }
        }
        return s;
    }
};