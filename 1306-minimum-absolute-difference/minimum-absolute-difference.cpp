class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        vector<vector<int>> answer;
        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1])==diff){
                answer.push_back({arr[i-1],arr[i]});
            }
            else if(arr[i]-arr[i-1]<diff){
                diff=arr[i]-arr[i-1];
                answer.clear();
                answer.push_back({arr[i-1],arr[i]});
            }
        }
        return answer;
    }
};