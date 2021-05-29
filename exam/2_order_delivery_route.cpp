/*
Amazon Fresh is a grocery delivery service that offers consumers the option of purchasing their groceries online and having them delivered on schedule. The Amazon Fresh team is planning a route for a delivery truck to deliver customer orders in the city of Techlandia. The planner will create a delivery area for each order to effectively plan the route. The area is abstracted as a grid. Not all locations are accessible by road. The truck only needs to make a single delivery.Write an algorithm to determine the minimum distance required for the truck to deliver the order.Assumptions:Some places in the delivery area cannot be accessed by the driver, as there are no roads in those locations.The delivery area can be represented as a two-dimensional grid of integers, where each integer represents one cell.The truck must start from the top-left corner of the area, which is always accessible and can move one cell up, down, left, or right at a time.The truck must navigate around the areas without roads and cannot leave the area.The accessible areas are represented as 1, areas without roads are represented by 0 and the order destination is represented by 9.InputThe input to the function/method consists of one argument:area, representing the two-dimensional grid of integers.OutputReturn an integer representing the total distance traversed to deliver the order else return -1.Constraints1 ≤ rows, columns ≤ 103ExampleInput:area =[[1, 0, 0],[1, 0, 0],[1, 9, 1]]Output:3Explanation:Starting from the top-left corner, the truck traversed the cells (0,0) -> (1,0) -> (2,0) -> (2,1). The truck traversed the total distanceto deliver the order.So, the output is 3.


*/


int minimumDistance(vector<vector<int>> area) {
    
    int row = area.size();
    if (row == 0)   return -1;
    int col = area[0].size();
    if (col == 0)   return -1;
        
    vector<pair<int, int> > directions {{0,1}, {1,0}, {-1,0}, {0,-1}};
    bool vis[row][col];
    for (int i = 0; i < row; ++i)    {
        for (int j = 0; j < col; ++j) {
            vis[i][j] = 0;
        }
    }
    
    // boundary check
    auto check = [&](int x, int y) {
        return (0<=x && x<row && 0<=y && y<col);
    };
    
    int distance = 0;
    
    queue<pair<int, int>> q;
    if (area[0][0] == 0)   return -1;
    q.push(make_pair(0,0));
    vis[0][0] = 1;
    
    while (!q.empty()) {
        
        distance++;        
        int sz = q.size();
        
        for (int i = 0; i < sz; ++i) {
            pair<int, int> curr = q.front();
            q.pop();
            
            for (pair<int, int> dir: directions) {
                int newX = dir.first + curr.first;
                int newY = dir.second + curr.second;
                if (check(newX, newY) == false) 
                    continue;
                    
                if (area[newX][newY] == 9) {
                    return distance;
                }
                if (area[newX][newY] == 0)
                    continue;
                
                if (!vis[newX][newY] && area[newX][newY])                {
                    vis[newX][newY] = 1;
                    q.push(make_pair(newX, newY));
                }
            }            
        }        
    }
    return -1;     
}