class Solution {
public:
    int bestClosingTime(string customers) {
        //check
        int penalty = 0;
        for (char c : customers){
            if (c == 'Y'){
                penalty++;
            }
        }
        int minPenalty = penalty;
        int min_hour = 0;
        for (int i = 0; i < customers.size(); i++){
            if (customers[i] == 'Y'){
                penalty--;
            } else {
                penalty++;
            }
            if (penalty < minPenalty){
                minPenalty = penalty;
                min_hour = i + 1;
            }
        }
        return min_hour;
    }
};