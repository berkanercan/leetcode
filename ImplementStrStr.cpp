class Solution {
public:
    int strStr(string haystack, string needle) {
        /*
        if( needle.empty() )
            return 0;
            
        if( haystack.empty() )
            return -1;
        
        if( needle.length() > haystack.length())
            return -1;
         */   
        for( int i = 0; ; i++ ){
            for( int j = 0; ; j++ ){
               
                if( j == needle.length() ) // needle exists, return first occurance index
                    return i;
                    
                if( i + j == haystack.length() )
                    return -1;
                    
                if( haystack[i+j] != needle[j] )
                    break;
            }
        }
        return -1;
    }
};
