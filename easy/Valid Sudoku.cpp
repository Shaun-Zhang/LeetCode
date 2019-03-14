class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {       
        for(int i = 0;i<9;i++)
        {
            bool check1[9]={0};
            bool check2[9]={0};
            bool check3[9]={0};
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {int cj = board[i][j]-'0'-1;
                if(check1[cj]==0)
                {
                    check1[cj]=1;
                }
                else
                {
                    return 0;
                }                
                }
                
                if(board[j][i]!='.')
                {int cj = board[j][i]-'0'-1;
                if(check2[cj]==0)
                {
                    check2[cj]=1;
                }
                else
                {
                    return 0;
                }                
                }
                
                if(board[i/3*3+j/3][i%3*3+j%3]!='.')
                {int cj = board[i/3*3+j/3][i%3*3+j%3]-'0'-1;
                if(check3[cj]==0)
                {
                    check3[cj]=1;
                }
                else
                {
                    return 0;
                }                
                }
                
            }
        }
        return 1;
    }
};