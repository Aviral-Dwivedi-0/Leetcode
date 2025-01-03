class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        vector<string> rev;
        int start=-1;
        int end=-1;
        bool word_continue=false;
        bool word_inserted=false;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                word_inserted=false;
                if(!word_continue){
                    start=i;
                    word_continue=true;
                }
                end=i;
            }
            else{
                word_continue=false;
                if(word_inserted==false && start>=0){
                    string t= s.substr(start,end-start+1);
                    rev.push_back(t);
                    word_inserted=true;
                }
            }
        }
        string req="";
        for(int i=rev.size()-1;i>=0;i--){
            if(i!=0)
            req+=rev[i]+" ";
            else
            req+=rev[i];
        }
        return req;
    }
};