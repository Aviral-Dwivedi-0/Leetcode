class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int start=0;
        int end=height.size()-1;
        while(start<end){
            if(height[start]<height[end]){
                maxArea=max(maxArea,height[start]*(end-start));
                start++;
            }
            else{
                maxArea=max(maxArea,height[end]*(end-start));
                end--;
            }
        }
        return maxArea;
    }
};