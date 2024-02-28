class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        int counter=0;
        if(arr[0]>arr[1]) return false;
        for(int i=1;i<n;i++){
            if(counter==0){
                if(arr[i]>arr[i-1]){
                    continue;
                }
                else counter++;
            }
            if(counter==1){
                if(arr[i]<arr[i-1]){
                    continue;
                }
                else return false;
            }
        }
        if(counter==1) return true;
        return false;
    }
};