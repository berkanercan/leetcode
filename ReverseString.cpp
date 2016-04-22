class Solution {
public:
    string reverseString(string s) {
        if(s.empty())
            return "";
        
        for(int i = 0; i < s.size()/2; i++){
            char temp = s[i];
            s[i] = s[s.size()-1-i];
            s[s.size()-1-i] = temp;
        }
        
        return s;
    }
};
