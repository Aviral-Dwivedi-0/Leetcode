class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int y=points[2][1];
        int y1=points[0][1];
        int y2=points[1][1];
        int x=points[2][0];
        int x1=points[0][0];
        int x2=points[1][0];
        if(((y-y1)*(x2-x1))==((y2-y1)*(x-x1))){
            return false;
        }
        return true;
    }
};