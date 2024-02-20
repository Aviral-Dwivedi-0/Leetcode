class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            if((count(arr.begin(),arr.end(),arr[i]))>n/4){
                return arr[i];
            }
        }
        return 0;
    }
};