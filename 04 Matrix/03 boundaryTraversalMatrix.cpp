
class Solution
{
public:
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int row, int col)
    {

        vector<int> ans;

        // rs = row start
        // re = row end
        // cs = column start
        // ce = column end
        int rs = 0, re = row-1, cs = 0, ce = col-1, tot;
        if ( (row == 1 || col == 1) || (row == 2 || col == 2) )
            tot = row*col;
        else
            tot = (2*row) + (2*col)-4;

        int x = 0;

        while (x < tot) {
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
