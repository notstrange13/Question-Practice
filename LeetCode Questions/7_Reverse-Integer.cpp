#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    long long reverse(long long x)
    {
        long long ans = 0;
        if (x < INT32_MAX || x > INT32_MIN) // Checks if the entering number is 32 bit or not
        {
            int sign = 1;
            long long digits;
            if (x < 0)
            {
                sign = -1;
            }
            //Storing the sign above and then converting the number into absolute form for easy operations
            x = abs(x);
            // Using simple loop algo to reverse a number
            while (x != 0)
            {
                digits = x % 10;
                // Checks if the assigned number to 'ans' is 32 bit or not
                if (ans > INT32_MAX / 10 || ans == INT32_MAX)
                {
                    return 0;       //Returns '0' if the number exceeds the limit of 32 bit
                }
                if (ans < INT32_MIN / 10 || ans == INT32_MIN)
                {
                    return 0;
                }
                ans = ans * 10 + digits;
                x /= 10;
            }
            ans = ans * sign;
            return ans;
        }
        else
            return ans;
    }
};

int main()
{
    //Input test cases
    Solution input;
    int x = -2147483648;
    cout << x << endl;
    int ans = input.reverse(x);
    cout << ans;

    return 0;
}