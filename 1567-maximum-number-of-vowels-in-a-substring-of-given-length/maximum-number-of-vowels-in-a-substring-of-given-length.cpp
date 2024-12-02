class Solution {
public:
    int maxVowels(string s, int k) {
        vector<int> vowel_no;
        int vowel=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel++;
            }
            vowel_no.push_back(vowel);
        }
        int maxi;
        for(int i=0;i<vowel_no.size()-(k-1);i++){
            int j=i+(k-1);
            if(i==0){
                maxi=vowel_no[j];
            }
            else{
                maxi=max(maxi,vowel_no[j]-vowel_no[i-1]);
            }
        }
        return maxi;
    }
};