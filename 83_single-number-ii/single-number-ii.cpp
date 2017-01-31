/*
@Copyright:LintCode
@Author:   goni0202
@Problem:  http://www.lintcode.com/problem/single-number-ii
@Language: C++
@Datetime: 16-08-10 16:36
*/

#include <algorithm>
class Solution {
public:
	/**
	 * @param A : An integer array
	 * @return : An integer 
	 */
    int singleNumberII(vector<int> &A) 
    {
        // write your code here
        sort(A.begin(), A.end());
        
        if(A[0] != A[1])
            return A[0];
            
        int n = A.size()-1;
        
        if(A[n] != A[n-1])
            return A[n];
        
        for(int i = 1; i < A.size() - 1; i++)
        {
            if(A[i] != A[i-1] && A[i] != A[i+1])
                return A[i];
        }
        
        return 0;
    }
};