class Solution {
public:
    char kthCharacter(int k) {
        int index=k;
        string start="a";
        while(k>0){
            string add="";
            for(int i=0;i<start.size();i++){
                add+=(start[i]+1);
            }
            start+=add;
            k--;
            cout<<start<<endl;
            if(start.size()<index) k--;
            else break;
        }
        return start[index-1];
    }
};