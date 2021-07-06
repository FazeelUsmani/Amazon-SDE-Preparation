bool search(int** Matrix, int n, int m, int x){
    if ((x < Matrix[0][0]) || (x > Matrix[n - 1][m - 1])) {
        return false;
    }

    int i = 0;
    int j = m - 1;
    while ((i <= n-1) && (j >= 0)){
        if (Matrix[i][j] == x){
            return true;
        }
        if (Matrix[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }
    return false;
}