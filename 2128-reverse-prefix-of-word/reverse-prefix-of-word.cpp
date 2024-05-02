class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        // Finding the index of the character ch
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        // Reversing the prefix
        int flag = 0;
        while (flag <= index / 2 ) {
            swap(word[flag], word[index - flag]);
            flag++;
        }
        return word;
    }
};
