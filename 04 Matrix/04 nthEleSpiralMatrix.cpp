# Find nth element in a spiral matrix

int findK(int matrix[MAX][MAX], int row, int col, int k)
{
    
    int x = 0;
        
    int rs = 0, re = row-1, cs = 0, ce = col-1, tot = row*col;
    
    while (x < (row*col)) {
        for (int j = cs; j <= ce && x < tot; ++j) {
            x++;
            if (x == k) {
                return matrix[rs][j];
            }
        }
        rs++;
        for (int i = rs; i <= re && x < tot; ++i) {
            x++;
            if (x == k) {
                return matrix[i][ce];
            }
        }
        ce--;
        for (int j = ce; j >= cs && x < tot; --j) {
            x++;
            if (x == k) {
                return matrix[re][j];
            }
        }
        re--;
        for (int i = re; i >= rs && x < tot; --i) {
            x++;
            if (x == k) {
                return matrix[i][cs];
            }
        }
        cs++;
    }
}
