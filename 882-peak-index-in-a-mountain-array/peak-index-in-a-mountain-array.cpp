class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int last=arr.size()-2;
        int first=1;
        while(first<=last){
            int mid=first+(last-first)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                first=mid+1;
            }
            else{
                last=mid-1;
            }
        }
        return 0;
    }
};