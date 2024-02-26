class Solution {
public:
    bool judgeCircle(string moves) {
        int l=moves.length();
        int v=0;
        int h=0;
        for(int i=0;i<l;i++){
            if(moves[i]=='U'){
                v++;
            }
            else if(moves[i]=='D'){
                v--;
            }
            else if(moves[i]=='R'){
                h++;
            }
            else{
                h--;
            }
        }
        if(v==0 && h==0){
            return true;
        }
        return false;
    }
};