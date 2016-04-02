//#include ctype.h -> this lib gives us isalnum(is Alpha Numeric) and tolower functions.
class Solution {
public:
    bool isPalindrome(string s) {
        if( s.empty() )
            return true;
            
        int frontIndex = 0;
        int endIndex = s.length() - 1;
        while( frontIndex < endIndex ){
            while( !isalnum(s[frontIndex]) && frontIndex < endIndex )
                frontIndex++;
        
            while( !isalnum(s[endIndex]) && endIndex > frontIndex)
                endIndex--;
            if( frontIndex >= endIndex )
                return true;
                
            if( tolower(s[frontIndex]) != tolower(s[endIndex]) )
                return false;
            
            frontIndex++;
            endIndex--;
        }
                
        return true;
    }
};
