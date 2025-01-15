class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hash[26]={0};
        for(int j=0;j<allowed.size();j++){
            hash[allowed[j]-'a']++;
        }
        int counter=0;
        for(int i=0;i<words.size();i++){
            int temp[26]={0};
            for(int j=0;j<words[i].size();j++){
                temp[words[i][j]-'a']++;
            }
            bool c =true;
            for(int k=0;k<26;k++){
                if((temp[k]>0 && hash[k]==0) || (temp[k]<0 && hash[k]>0)){
                    c=false;
                    break;
                }
            }
            if(c){
                counter++;
            }
        }
        return counter;
    }
};