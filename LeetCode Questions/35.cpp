#include "headers/myheaders.h"

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            if (nums[i] < target)
            {
                if(i==(nums.size()-1)){
                    return i+1;
                }
                if (nums[i + 1] > target)
                {

                    return i + 1;
                }
                
            }
        }
    }
};

int main()
{
    Solution sol;
}