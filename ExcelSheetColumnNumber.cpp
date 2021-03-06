class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(int i = s.length()-1; i >= 0; i--){
            result += pow(26,i) * (s[s.length() -1 - i] - 'A' + 1);
        }
        return result;
    }
};
