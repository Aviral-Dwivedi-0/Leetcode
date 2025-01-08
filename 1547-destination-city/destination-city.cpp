class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> source;
        set<string> destination;
        for(int i=0;i<paths.size();i++){
            source.insert(paths[i][0]);
            destination.insert(paths[i][1]);
        }
        for(auto i:destination){
            if(source.find(i)==source.end()){
                return i;
            }
        }
        return "";
    }
};