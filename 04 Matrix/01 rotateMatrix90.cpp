void rotate(vector<vector<int> >& matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    vector<vector<int> > ans(row, vector<int> (col, 0));
    int start = row-1;
    for (int i = 0; i < row; ++i) {
        start = row-1;
        for (int j = 0; j < col; ++j) {
            ans[start--][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = ans[i][j];
        }
    }
}
