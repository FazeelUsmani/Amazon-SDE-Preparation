#include <vector>
#include <iostream>

class Solution
{   
public:     
    std::vector<int> boundaryTraversalNew(std::vector <std::vector <int>> matrix, int n, int m)
    {
        // n = # of rows, m = # of columns
        std::vector<int> result;

        // adds the horizontal row in the first row to the result
        for(int i = 0; i < m; i++)
        {
            result.push_back(matrix[0][i]);
        }
        
        // adds the vertical row in the last column to the result
        for(int i = 1; i < n-1; i++)
        {
            result.push_back(matrix[i][m-1]);
        }
        
        // adds the horizontal row in the last row to the result
        for(int i = m-1; i >= 0; i--)
        {
            result.push_back(matrix[n-1][i]);
        }
        
        // adds the vertical row in the first column to the result
        for(int i = n-2; i > 0; i--)
        {
            result.push_back(matrix[i][0]);
        }
        
        return result;
    }

    
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