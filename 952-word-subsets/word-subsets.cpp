class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> output;
        
        int universal[26]={0};
        for(int i=0;i<words2.size();i++){
            int hash[26]={0};
            for(int j=0;j<words2[i].size();j++){
                hash[words2[i][j]-'a']++;
            }
            for(int k=0;k<26;k++){
                universal[k]=max(universal[k],hash[k]);
            }
        }
        for(int i=0;i<words1.size();i++){
            int checker[26]={0};
            for(int j=0;j<words1[i].size();j++){
                checker[words1[i][j]-'a']++;
            }
            bool flag=true;
            for(int k=0;k<26;k++){
                if(universal[k]>checker[k]) flag=false;
            }
            if(flag==true) output.push_back(words1[i]);
        }
        return output;
    }
};