class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix.size()-1-i;j++)
            {
                swap(matrix[i][j],matrix[matrix.size()-1-j][matrix.size()-1-i]);
            }
            for(int i=0;i<matrix.size()/2;i++)
            {
                swap(matrix[matrix.size()-1-i],matrix[i]);
            }
    }
};