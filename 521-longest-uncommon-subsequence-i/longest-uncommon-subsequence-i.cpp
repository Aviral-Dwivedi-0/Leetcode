class Solution {
public:
    int findLUSlength(string a, string b) {
        int al=a.length();
        int bl=b.length();
        if(a==b) return -1;
        else return max(al,bl);
    }
};