class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::map<char, int> lookup;
        lookup.erase(lookup.begin(), lookup.end());
        // check horizontal
        for(int i = 0; i < board.size(); i++){
            lookup.erase(lookup.begin(), lookup.end());
            for(int j = 0; j < board[i].size(); j++){
                if( board[i][j] != '.' )
                {
                    if( lookup.find(board[i][j]) != lookup.end() )
                        return false;
                    else 
                        lookup[board[i][j]] = 1;
                }
            }
            
        }
        // check vertical
        for(int i = 0; i < board.size(); i++){
            lookup.erase(lookup.begin(), lookup.end());
            for(int j = 0; j < board[j].size(); j++){
                if( board[j][i] != '.' )
                {    
                    if( lookup.find(board[j][i]) != lookup.end() )
                        return false;
                    else 
                        lookup[board[j][i]] = 1;
                }
            }
        }
    
        // check inner squares
        for( int i = 0; i < 3; i++ ){
            for( int j = 0; j < 3 ; j++ ){
                lookup.erase(lookup.begin(), lookup.end());
                for( int k = 3*i; k < 3*i + 3; k++ ){
                    for( int l = 3*j; l < 3*j + 3; l++){
                        if( board[k][l] != '.' )
                        {
                            if( lookup.find(board[k][l]) != lookup.end() )
                                return false;
                            else 
                                lookup[board[k][l]] = 1;
                        }
                    }
                }
            }
        }
    
        return true;
    }
};
