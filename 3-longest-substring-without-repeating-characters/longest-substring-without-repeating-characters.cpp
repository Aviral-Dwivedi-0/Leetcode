class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start_index=0;
        int hash[128]={0};
        int answer=0;
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
            while(hash[s[i]]>1) {
                hash[s[start_index]]--;
                start_index++;
            }
            answer=max(answer,i-start_index+1);
        }
        return answer;
    }
};