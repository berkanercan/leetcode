class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int startIndex = 0;
        int letters[128] = {0};
        for(int endIndex = 0; endIndex < s.length(); endIndex++){
            while(letters[s[endIndex]] == 1){
                letters[s[startIndex]] = 0;
                startIndex++;
            }
            letters[s[endIndex]] = 1;
            longest = max(endIndex - startIndex + 1,longest); //#include <algorithm>
        }
        return longest;
    }
};
