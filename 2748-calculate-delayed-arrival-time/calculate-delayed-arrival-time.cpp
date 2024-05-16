class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int abc= arrivalTime + delayedTime ;
        return abc%24;
    }
};