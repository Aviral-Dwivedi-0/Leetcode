class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int counter=0;
        if(n==0) return true;
        if(flowerbed.size()==1) return !flowerbed[0];
        for(int i=0;i<flowerbed.size();i++){
            if(i==0 && flowerbed[i]==0){
                if(flowerbed[i+1]==0){
                    counter++;
                    flowerbed[i]=1;
                }
            }
            else if(i>0 && i<flowerbed.size()-1){
                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    counter++;
                    flowerbed[i]=1;
                }
            }
            else if(i==flowerbed.size()-1 && flowerbed[i]==0){
                if(flowerbed[i-1]==0){
                    counter++;
                    flowerbed[i]=1;
                }
            }
        }
        return counter>=n;
    }
};