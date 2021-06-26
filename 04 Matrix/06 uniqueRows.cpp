string uniqueRow(int** Matrix, int R, int C){
    unordered_map<string, int> mapRow;
    string row;
    string output;
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            row += (Matrix[i][j]) +'0';
            row += " ";
        }
        if(mapRow[row]==0){
            mapRow[row]++;
            output += row;
            output += "$";
        }
        row= "";
    }
    return output;
}