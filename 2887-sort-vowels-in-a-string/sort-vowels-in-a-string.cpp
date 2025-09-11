class Solution {
public:
    string sortVowels(string s) {
        vector<int> vseq;
        for(auto i:s){
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                vseq.push_back(i);
            }
        }
        sort(vseq.begin(),vseq.end());
        int counter=0;
        for(auto &i:s){
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                i=vseq[counter];
                counter++;
            }
        }
        return s;
    }
};