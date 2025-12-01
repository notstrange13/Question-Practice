
// You have n computers. You are given the integer n and a 0-indexed integer array batteries where the ith battery can run a computer for batteries[i] minutes. You are interested in running all n computers simultaneously using the given batteries.

#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    long long maxRunTime(int n, vector<int> &batteries)
    {
        int ans = 0;
        sort(batteries.begin(), batteries.end());
        int left = 0;
        int right = batteries.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(batteries[mid]==){}
        }
        return ans;
    }
};