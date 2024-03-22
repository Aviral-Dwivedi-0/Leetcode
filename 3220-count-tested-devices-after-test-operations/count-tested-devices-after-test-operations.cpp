class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int counter=0;
        int tested_devices=0;
        for(int i=0;i<batteryPercentages.size();i++){
            if(batteryPercentages[i]-counter>0){
                tested_devices++;
                counter++;
            }
        }
        return tested_devices;
    }
};