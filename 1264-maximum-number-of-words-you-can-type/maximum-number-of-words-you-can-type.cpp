class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> broken;
        for(char i:brokenLetters){
            broken.insert(i);
        }
        bool newword=true;
        int counter=0;
        for(int i=0;i<text.size();i++){
            if(newword && broken.find(text[i])!=broken.end()){
                newword=false;
            }
            if(text[i]==' ' && newword==true){
                counter++;
            }
            else if(text[i]==' '){
                newword=true;
            }
        }
        if(newword==true) counter++;
        return counter;
    }
};