class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> height;
        height.push_back(0);
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            height.push_back(sum);
        }
        return *max_element(height.begin(),height.end());
    }
};