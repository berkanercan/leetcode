class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int startIndex = 0;
        int letters[128];
        std::fill_n(letters, 128, -1);
        for(int endIndex = 0; endIndex < s.length(); endIndex++){
            if(letters[s[endIndex]] >= startIndex){
                startIndex = letters[s[endIndex]] + 1;
            }
            letters[s[endIndex]] = endIndex;
            longest = max(endIndex - startIndex + 1,longest); //#include <algorithm>
        }
        return longest;
    }
};
