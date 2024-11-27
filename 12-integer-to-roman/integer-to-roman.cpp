class Solution {
public:
    string intToRoman(int num) {
        int thousands=num/1000;
        num%=1000;
        int hundreds=num/100;
        num%=100;
        int tens=num/10;
        num%=10;
        int ones=num/1;
        string answer="";
        // THOUSANDS
        for(int i=0;i<thousands;i++){
            answer+="M";
        }

        //HUNDREDS
        if(hundreds<=3){
            for(int i=0;i<hundreds;i++){
                answer+="C";
            }
        }
        else if(hundreds==4) answer+="CD";
        else if(hundreds==9) answer+="CM";
        else{
            answer+="D";
            hundreds-=5;
            for(int i=0;i<hundreds;i++){
                answer+="C";
            }
        }

        // TENS
        if(tens<=3){
            for(int i=0;i<tens;i++){
                answer+="X";
            }
        }
        else if(tens==4) answer+="XL";
        else if(tens==9) answer+="XC";
        else{
            answer+="L";
            tens-=5;
            for(int i=0;i<tens;i++){
                answer+="X";
            }
        }

        //ONES
        if(ones<=3){
            for(int i=0;i<ones;i++){
                answer+="I";
            }
        }
        else if(ones==4) answer+="IV";
        else if(ones==9) answer+="IX";
        else{
            answer+="V";
            ones-=5;
            for(int i=0;i<ones;i++){
                answer+="I";
            }
        }
        return answer;
    }
};