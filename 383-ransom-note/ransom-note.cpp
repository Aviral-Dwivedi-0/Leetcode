class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int l=ransomNote.length();
        if(l>magazine.length()) return false;
        for(int i=0;i<l;i++){
            if((count(ransomNote.begin(),ransomNote.end(),ransomNote[i]))>(count(magazine.begin(),magazine.end(),ransomNote[i]))){
                return false;
            }
        }
        return true;
    }
};