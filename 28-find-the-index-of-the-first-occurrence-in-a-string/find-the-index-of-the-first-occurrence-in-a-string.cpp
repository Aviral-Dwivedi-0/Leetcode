class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.size();
        int n=haystack.size();
        if(m>n) return -1;
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[0]){
                if(i+m>n) return -1;
                string str=haystack.substr(i,m);
                if(str==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};