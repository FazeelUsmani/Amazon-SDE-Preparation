class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int row, int col)
    {
        vector<int> ans;
        int x = 0;

        int rs = 0, re = row-1, cs = 0, ce = col-1, tot = row*col;

        while (x < (row*col)) {
            for (int j = cs; j <= ce && x < tot; ++j) {
                ans.push_back(matrix[rs][j]);
                x++;
            }
            rs++;
            for (int i = rs; i <= re && x < tot; ++i) {
                ans.push_back(matrix[i][ce]);
                x++;
            }
            ce--;
            for (int j = ce; j >= cs && x < tot; --j) {
                ans.push_back(matrix[re][j]);
                x++;
            }
            re--;
            for (int i = re; i >= rs && x < tot; --i) {
                ans.push_back(matrix[i][cs]);
                x++;
            }
            cs++;
        }

        return ans;
    }
};
