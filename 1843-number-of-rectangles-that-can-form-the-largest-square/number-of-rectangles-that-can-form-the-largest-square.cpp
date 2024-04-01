class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> rect;
        for(int i=0;i<rectangles.size();i++){
            rect.push_back(min(rectangles[i][0],rectangles[i][1]));
        }
        int maxi=*max_element(rect.begin(),rect.end());
        return (count(rect.begin(),rect.end(),maxi));
    }
};