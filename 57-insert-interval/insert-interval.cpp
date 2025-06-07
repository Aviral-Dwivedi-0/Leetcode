class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>> answer;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(i==0 || answer.back()[1]< intervals[i][0]){
                int start=intervals[i][0];
                int end=intervals[i][1];
                answer.push_back({start,end});
            }
            else{
                answer.back()[1]=max(answer.back()[1],intervals[i][1]);
            }
        }
        return answer;
    }
};