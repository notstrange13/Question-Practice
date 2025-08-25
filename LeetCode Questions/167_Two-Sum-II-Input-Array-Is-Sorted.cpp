#include "headers/myheaders.h"

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> ans;

        while (left < right)
        {
            if ((numbers[left] + numbers[right]) == target)
            {
                ++left;
                ++right;
                return {left, right};
            }
            else if ((numbers[left] + numbers[right]) > target)
            {
                right--;
            }
            else if ((numbers[left] + numbers[right]) < target)
            {
                left++;
            }
            else
            {
                return {};
            }
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> input = {5, 25, 75};
    int target = 100;
    vector<int> ans = sol.twoSum(input, target);
    for (int i : ans)
    {
        cout << ans[i] << " ";
    }
    return 0;
}