/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/number-of-islands
@Language: C++
@Datetime: 16-08-16 15:47
*/

#include <queue>

class Solution {
public:
    /**
     * @param grid a boolean 2D matrix
     * @return an integer
     */
    int numIslands(vector<vector<bool>>& grid)
    {
        // Write your code here
        
        auto bfs = [&grid](int x, int y)
        {
            
            if(grid[x][y] == false)
                return false;
            
            int dx[] = { 0, 1 ,-1, 0};
            int dy[] = { 1, 0, 0, -1};
            
            queue<pair<int,int>> q;
            
            q.push(make_pair(x, y));
            
            while(!q.empty())
            {
                int hx = q.front().first;
                int hy = q.front().second;
                q.pop();
                
                grid[hx][hy] = 0;
                
                for(int i = 0; i < 4; i++)
                {
                    int cx = hx + dx[i];
                    int cy = hy + dy[i];
                    
                    if(cx < 0 || cy < 0 || cx >= grid.size() || cy >= grid[0].size()) continue;
                    
                    if(grid[cx][cy] == true)
                    {
                        q.push(make_pair(cx, cy));
                    }
                        
                }
            }
            
            return true;
        };
        
        int cnt = 0;
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if( bfs(i, j) == 1 )
                    cnt++;
            }
                
        }
            
            
        return cnt;
        
    }
};