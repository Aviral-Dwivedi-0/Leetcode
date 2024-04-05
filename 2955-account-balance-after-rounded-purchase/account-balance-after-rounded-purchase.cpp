class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int balance=100-purchaseAmount;
        if(balance%10<=5){
            return balance-balance%10;
        }
        return balance+(10-balance%10);
    }
};