class Solution {
public:
    double trimMean(vector<int>& arr) {
        double sum=0;
        sort(arr.begin(),arr.end());
        double sl=(arr.size())*0.05;
        double el=(arr.size())*0.95;
        for(int i=sl;i<el;i++){
            sum+=arr[i];
        }
        return (sum)/(el-sl);
    }
};