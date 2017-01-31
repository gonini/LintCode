/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/sort-colors-ii
@Language: C++
@Datetime: 16-08-11 12:26
*/

class Solution{
public:
    /**
     * @param colors: A list of integer
     * @param k: An integer
     * @return: nothing
     */    
    void sortColors2(vector<int> &colors, int k)
    {
        // write your code here
        vector<int> counter(k+1, 0);
        
        for(auto e : colors)
            counter[e]++;
        
        colors.clear();
        
        for(int i = 0; i < counter.size(); i++)
        {
            while(counter[i]--)
            {
                colors.push_back(i);
            }
        }
        
    }
};