#include "headers/myheaders.h"
using namespace std;

class Solution
{
public:
    long long reverse(long long x)
    {
        long long ans = 0;
        if (x < INT32_MAX || x > INT32_MIN)
        {
            int sign = 1;
            long long digits;
            if (x < 0)
            {
                sign = -1;
            }
            x = abs(x);
            while (x != 0)
            {
                digits = x % 10;
                if(ans>INT32_MAX/10 || ans==INT32_MAX){
                    return 0;
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
    Solution input;
    int x = -2147483648;
    cout<<x<<endl;
    int ans = input.reverse(x);
    cout << ans;

    return 0;
}