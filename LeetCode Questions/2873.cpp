// 2873. Maximum Value of an Ordered Triplet I

/*

You are given a 0-indexed integer array nums.

Return the maximum value over all triplets of indices (i, j, k) such that i < j < k. If all such triplets have a negative value, return 0.

The value of a triplet of indices (i, j, k) is equal to (nums[i] - nums[j]) * nums[k].

*/

#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    long long maximumTripletValue(vector<int> &nums)
    {
        long maxTriplet = 0, maxElement = 0, maxDiff = 0;
        for (long num : nums)
        {
            maxTriplet = max(maxTriplet, maxDiff * num);
            maxDiff = max(maxDiff, maxElement - num);
            maxElement = max(maxElement, num);
        }
        return maxTriplet;
    }
};

int main()
{

    Solution sol;
    vector<int> input = {12, 6, 1, 2, 7};

    int ans = sol.maximumTripletValue(input);

    cout << ans << endl;

    return 0;
}