#include "headers/myheaders.h"

class Solution
{
public:
    int minSubarray(vector<int> &nums, int p)
    {
        long long sum1, sum2 = 0;
        int diff = 0;
        int ans = nums.size();
        int rem = 0;
        int len = 0;
        int prefix = 0;
        unordered_map<int, int> hmap = {{0, -1}};
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            sum1 = sum1 + nums[i];
        }
        rem = sum1 % p;
        if (rem == p)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            sum2 = (sum2 + nums[i]) % p;
            prefix = (sum2 - rem + p) % p;
            auto bol = hmap.find(prefix);
            if (bol != hmap.end())
            {
                len = i - hmap[prefix];
                cout << len << endl;
                ans = min(ans, len);
                cout << "hello" << endl;
            }
            hmap[prefix] = i;
        }
        if (nums.size() == len)
            return -1;
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> testArr = {6, 3, 5, 2};
    int testP = 9;
    int ans = sol.minSubarray(testArr, testP);
    cout << ans;
    // ans = 2
}