  
void MatrixDiagonally(int mat[][100], int n) 
{ 

    int i = 0, j = 0; 
  

    bool Upward = true; 
  
    
    for (int k = 0; k < n * n;) { 
        
       
        if (Upward) { 
            for (; i >= 0 && j < n; j++, i--) { 
                cout << mat[i][j] << " "; 
                k++; 
            } 
  
            if (i < 0 && j <= n - 1) 
                i = 0; 
            if (j == n) 
                i = i + 2, j--; 
        } 
  
   
        else { 
            for (; j >= 0 && i < n; i++, j--) { 
                cout << mat[i][j] << " "; 
                k++; 
            } 
  
            if (j < 0 && i <= n - 1) 
                j = 0; 
            if (i == n) 
                j = j + 2, i--; 
        } 
  

        Upward = !Upward; 
    } 
} 