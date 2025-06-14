class Solution {
public:
    int minMaxDifference(int num) {
        string upd=to_string(num);
        char victim;
            int index=0;
            while(true){
                if(upd[index]=='9')
                index++;
                else
                break;
            }
            if(index==upd.size()) return num;
            victim=upd[index];
            while(index<upd.size()){
                if(upd[index]==victim){
                    upd[index]='9'; 
                }
                index++;
            }
            string minus=to_string(num);
            int ni=0;
            while(true){
                if(minus[ni]=='0')
                ni++;
                else break;
            }
            victim=minus[ni];
            while(ni<minus.size()){
                if(minus[ni]==victim){
                    minus[ni]='0';
                    
                }
                ni++;
            }
            return abs(stoi(upd)-stoi(minus));
    }
};