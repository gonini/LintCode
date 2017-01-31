/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/number-of-airplanes-in-the-sky
@Language: C++
@Datetime: 16-08-12 07:23
*/

/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution {
public:
    /**
     * @param intervals: An interval array
     * @return: Count of airplanes are in the sky.
     */
    int countOfAirplanes(vector<Interval> &airplanes) 
    {
        // write your code here
        
        int maximum = 0;
        
        for(auto e : airplanes)
        {
            maximum = max({maximum, e.start, e.end});
        }
        
        vector<int> seqce(maximum + 1, 0);
        
        for(auto e : airplanes)
        {
            int i = e.start;
            int n = e.end;
            
            for(i; i < n; i++)
            {
                seqce[i] += 1;
            }
        }
        
        auto maxIt = max_element(seqce.begin(), seqce.end());
        
        return *maxIt;
    }
};