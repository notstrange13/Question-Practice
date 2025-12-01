#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int left = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[left] = nums[i];
                left++;
            }
        }
        return left;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    int ans = sol.removeElement(nums, val);

    cout<<ans<<endl;

    return 0;
}

// The answer must be 4
