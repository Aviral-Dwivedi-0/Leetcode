class Solution {
public:
    bool isPathCrossing(string path) {
       set<pair<int,int>> visited;
       int x=0;
       int y=0;
       visited.insert({0,0});
       for(auto dir: path){
        if(dir=='N') y++;
        else if(dir=='S') y--;
        else if(dir=='E') x--;
        else if(dir=='W') x++;
        if(visited.count({x,y})>0) return true;
        else visited.insert({x,y});
       }
       return false;
    }
};