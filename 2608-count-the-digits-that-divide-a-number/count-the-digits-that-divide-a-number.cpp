class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int counter=0;
        while(temp>0){
            int x=temp%10;
            temp/=10;
            if(num%x==0){
                counter++;
            }
        }
        return counter;
    }
};