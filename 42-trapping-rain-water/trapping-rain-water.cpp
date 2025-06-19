class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> previous;
        vector<int> next;
        int n=height.size();
        int prev_max=0;
        int next_max=0;
        previous.push_back(0);
        next.push_back(0);
        for(int i=1;i<n;i++){
            prev_max=max(height[i-1],prev_max);
            previous.push_back(prev_max);
        }
        for(int i=n-2;i>=0;i--){
            next_max=max(height[i+1],next_max);
            next.insert(next.begin(),next_max);
        }
        int answer=0;
        for(int i=0;i<n;i++){
            if(height[i]<previous[i] && height[i]<next[i])
            answer+=min(previous[i],next[i])-height[i];
        }
        return answer;
    }
};