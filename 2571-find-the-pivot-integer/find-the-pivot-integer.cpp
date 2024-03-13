class Solution {
public:
    int pivotInteger(int n) {
        int l = 1;
        int r = n;
        int sum = (n * (n + 1))/2;
        while(l <= r){
            int mid = l + (r - l) / 2;
            int firstSum = (mid * (mid + 1))/2;
            int secondSum = sum - firstSum + mid;
            if(firstSum == secondSum) return mid;
            else if(firstSum < secondSum){
                    l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return -1;
    }
};